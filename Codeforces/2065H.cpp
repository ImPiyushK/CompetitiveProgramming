#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MODULO = 998244353;

// Fenwick Tree (Binary Indexed Tree) structure
struct FenwickTree {
    int size;
    vector<ll> tree;

    FenwickTree(int n) : size(n), tree(n + 1, 0) {}

    void update(int index, ll value) {
        while (index <= size) {
            tree[index] = (tree[index] + value) % MODULO;
            if (tree[index] < 0) tree[index] += MODULO;
            index += index & -index;
        }
    }

    ll query(int index) {
        ll sum = 0;
        while (index > 0) {
            sum = (sum + tree[index]) % MODULO;
            index -= index & -index;
        }
        return sum;
    }

    ll rangeQuery(int left, int right) {
        return (left > right) ? 0 : (query(right) - query(left - 1) + MODULO) % MODULO;
    }
};

const int MAX_EXP = 400000;

// Precompute powers of 2 modulo MODULO
void computePowers(vector<ll>& powers) {
    powers.resize(MAX_EXP + 1);
    powers[0] = 1;
    for (int i = 1; i <= MAX_EXP; i++) {
        powers[i] = (powers[i - 1] * 2) % MODULO;
    }
}

// Function to solve each test case
void processTestCase(const vector<ll>& powers) {
    string binaryString;
    cin >> binaryString;
    int length = binaryString.size();

    FenwickTree leftZero(length), leftOne(length), rightZero(length), rightOne(length);
    vector<int> bitState(length + 1, 0);

    // Initialize Fenwick Trees
    for (int i = 0; i < length; i++) {
        int pos = i + 1;
        if (binaryString[i] == '0') {
            bitState[pos] = 0;
            leftZero.update(pos, powers[pos - 1]);
            rightZero.update(pos, powers[length - pos]);
        } else {
            bitState[pos] = 1;
            leftOne.update(pos, powers[pos - 1]);
            rightOne.update(pos, powers[length - pos]);
        }
    }

    ll sumB = 0;
    for (int j = 2; j <= length; j++) {
        if (bitState[j] == 0) {
            sumB = (sumB + (powers[length - j] * leftOne.query(j - 1)) % MODULO) % MODULO;
        } else {
            sumB = (sumB + (powers[length - j] * leftZero.query(j - 1)) % MODULO) % MODULO;
        }
    }

    ll totalA = (powers[length] - 1 + MODULO) % MODULO;

    int queries;
    cin >> queries;
    while (queries--) {
        int index;
        cin >> index;

        int oldValue = bitState[index];
        int newValue = 1 - oldValue;

        ll oldContribution = (oldValue == 0)
                                 ? (powers[length - index] * leftOne.query(index - 1)) % MODULO
                                 : (powers[length - index] * leftZero.query(index - 1)) % MODULO;

        ll newContribution = (newValue == 0)
                                 ? (powers[length - index] * leftOne.query(index - 1)) % MODULO
                                 : (powers[length - index] * leftZero.query(index - 1)) % MODULO;

        ll deltaSelf = (newContribution - oldContribution + MODULO) % MODULO;

        ll powX = powers[index - 1];
        ll sumZero = rightZero.rangeQuery(index + 1, length);
        ll sumOne = rightOne.rangeQuery(index + 1, length);

        ll deltaRight = (oldValue == 0 && newValue == 1)
                            ? (powX * ((sumZero - sumOne + MODULO) % MODULO)) % MODULO
                            : (powX * ((sumOne - sumZero + MODULO) % MODULO)) % MODULO;

        ll totalDelta = (deltaSelf + deltaRight) % MODULO;
        sumB = (sumB + totalDelta + MODULO) % MODULO;

        if (oldValue == 0) {
            leftZero.update(index, -powers[index - 1]);
            rightZero.update(index, -powers[length - index]);
        } else {
            leftOne.update(index, -powers[index - 1]);
            rightOne.update(index, -powers[length - index]);
        }

        if (newValue == 0) {
            leftZero.update(index, powers[index - 1]);
            rightZero.update(index, powers[length - index]);
        } else {
            leftOne.update(index, powers[index - 1]);
            rightOne.update(index, powers[length - index]);
        }

        bitState[index] = newValue;

        ll finalAnswer = (totalA + sumB) % MODULO;
        cout << finalAnswer << " ";
    }

    cout << "\n";
}

// Main function to drive the program
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    vector<ll> powerCache;
    computePowers(powerCache);

    while (testCases--) {
        processTestCase(powerCache);
    }

    return 0;
}

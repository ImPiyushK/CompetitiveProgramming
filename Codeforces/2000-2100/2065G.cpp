#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 200000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Generate prime numbers up to LIMIT using the Sieve of Eratosthenes
    vector<bool> isPrime(LIMIT + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int size;
        cin >> size;

        vector<int> freq(size + 1, 0);

        for (int i = 0; i < size; i++) {
            int num;
            cin >> num;
            if (num <= size) {
                freq[num]++;
            }
        }

        long long result = 0;

        // Processing numbers of the form p^2 where p is prime
        for (int p : primes) {
            if (p > size) break;
            long long countP = freq[p];
            long long squared = 1LL * p * p;

            if (squared <= size) {
                long long countSquared = freq[squared];
                result += countP * countSquared + (countSquared * (countSquared + 1)) / 2;
            }
        }

        // Processing numbers of the form p * q where p < q
        vector<int> validPrimes;
        for (int p : primes) {
            if (p > size) break;
            validPrimes.push_back(p);
        }

        int primeCount = validPrimes.size();
        vector<long long> suffixSum(primeCount + 1, 0);

        for (int i = primeCount - 1; i >= 0; i--) {
            suffixSum[i] = suffixSum[i + 1] + freq[validPrimes[i]];
        }

        for (int i = 0; i < primeCount; i++) {
            int p = validPrimes[i];
            long long countP = freq[p];

            int maxQ = size / p;

            int lower = i + 1;
            int upper = upper_bound(validPrimes.begin() + lower, validPrimes.end(), maxQ) - validPrimes.begin();

            for (int j = lower; j < upper; j++) {
                int q = validPrimes[j];
                long long countQ = freq[q];
                int product = p * q;
                long long countProduct = freq[product];

                long long addPairs = countP * countQ + countP * countProduct + countQ * countProduct;
                addPairs += (countProduct * (countProduct + 1)) / 2;
                result += addPairs;
            }

            if (upper < primeCount) {
                long long sumRemaining = suffixSum[upper];
                result += countP * sumRemaining;
            }
        }

        cout << result << "\n";
    }

    return 0;
}

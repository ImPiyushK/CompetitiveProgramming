#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    if (total % n != 0)
    {
        cout << "NO\n";
        return;
    }

    long long target = total / n;

    long long sum_even = 0, sum_odd = 0;
    int cnt_even = 0, cnt_odd = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        { // 1-based indexing
            sum_even += a[i];
            cnt_even++;
        }
        else
        {
            sum_odd += a[i];
            cnt_odd++;
        }
    }

    if (sum_even == target * cnt_even && sum_odd == target * cnt_odd)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
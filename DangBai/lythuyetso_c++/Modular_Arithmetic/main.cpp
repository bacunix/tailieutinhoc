#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// tinh so du cua cac phan tu trong mang voi 10^9 + 7

int main() 
{
    int n;cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 1;
    for(int i = 0; i < n; i++)
    {
        sum *= a[i];
        sum %= MOD;
    }
    cout << sum % MOD << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
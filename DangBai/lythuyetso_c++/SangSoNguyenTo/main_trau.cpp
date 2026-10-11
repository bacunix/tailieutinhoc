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

bool isPrime(ll n)
{
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    freopen("main.inp", "r", stdin);
    freopen("main.ans", "w", stdout);
    ll n;cin >> n;
    for(int i = 0;i <= n; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
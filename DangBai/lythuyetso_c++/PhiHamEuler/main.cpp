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

ll Euler(ll n)
{
    ll res = n;
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0) n /= i;
            res = res - res/i;
        }
    }
    if(n != 1) res = res - res/n;
    return res;
}

int main() 
{
    ll n;cin >> n;
    cout << Euler(n) << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
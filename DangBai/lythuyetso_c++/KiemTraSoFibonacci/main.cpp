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

bool fibo(ll n)
{
    if(n == 0 || n == 1) return true;
    ll fn2 = 0;
    ll fn1 = 1;
    for(int i = 3; i <= 93; i++)
    {
        ll fn = fn2 + fn1;
        if(n == fn) return true;
        fn2 = fn1;
        fn1 = fn;
    }
    return false;
}

int main() 
{
    ll n;cin >> n;

    if(fibo(n)) 
        cout << "YES" << endl;
    else cout << "NO" << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
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

ll Pow(ll a, ll b)
{
    ll res = 1;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            res *= a;
        }
        b /= 2;
        a *= 2;
    }
    return res;
}

int main() 
{
    ll a, b;
    cin >> a >> b;
    cout << Pow(a, b) << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
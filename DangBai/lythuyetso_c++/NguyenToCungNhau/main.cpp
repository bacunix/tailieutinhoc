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

long long GCD(long long a, long long b)
{
    if(b == 0)
        return a;
    return GCD(b, a % b);
}

int main() 
{
    long long a,b;
    cin >> a >> b;

    // cout << GCD(a, b) << endl;

    if(GCD(a, b) == 1)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
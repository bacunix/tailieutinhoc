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

int giaithua(int n)
{
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main() 
{
    int n,x;cin >> n >> x;
    int res = 1 + x;
    for(int i = 2;i <= n;i++)
    {
        res += (pow(x, i) / giaithua(i));
    }

    cout << res << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
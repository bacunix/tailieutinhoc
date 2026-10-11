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


int main() 
{
    int t;cin >> t;
    while(t--)
    {
        int n, m;cin >> n >> m;
        int a[n][m];
        unordered_map<int, int> mp;
        ll MAX = LONG_LONG_MIN;
        for(int i = 0; i < n ; i++)
        {
            int s = 0;
            for(int j = 0;j < m; j++)
            {
                cin >> a[i][j];
                s += a[i][j];
            }
            mp[s] = 
        }
        for(int i = 0; i < n; i++)
        {
            ll s = 0;
            for(int j = 0; j < m; j++)
            {
                s += a[i][j];
            } 
            if(s > MAX) MAX = s;  
        }
    }

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
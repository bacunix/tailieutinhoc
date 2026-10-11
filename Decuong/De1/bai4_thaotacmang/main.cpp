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
    int n;cin >> n;
    int a[n+1];
    int MAX = INT_MIN;
    int MAX2 = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        MAX = max(a[i], MAX);
    }

    int sum = 0;
    int dem = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != MAX)
        {
            MAX2 = max(MAX2, a[i]);
        }

        if(i % 2 == 1 && a[i] % 2 == 0)
        {
            sum += a[i];
            dem++;
        }
    }

    cout << MAX << endl;
    cout << MAX2 << endl;
    cout << sum / dem << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
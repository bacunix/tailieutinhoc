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
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0;i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    int x;cin >> x;

    for(int i = n; i >= 0; i--)
    {
        if(i == 0) 
        {
            a[i] = x;
            break;
        }
        if(x >= a[i-1]) 
        {
            a[i] = x;
            break;
        }
        else a[i] = a[i-1];
    }

    for(int i = 0; i <= n;i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
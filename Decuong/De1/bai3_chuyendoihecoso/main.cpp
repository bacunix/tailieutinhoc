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
    vector<int> v;
    while(n > 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }

    for(int i = (int)v.size()-1; i >= 0; i--)
    {
        cout << v[i];
    }
    cout << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
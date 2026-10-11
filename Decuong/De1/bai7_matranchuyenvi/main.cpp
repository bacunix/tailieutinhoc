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
    int A[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int tongchinh = 0;
    for(int i = 0; i < n; i++)
    {
        tongchinh += A[i][i];
    }

    int tongphu = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == n - 1 - i) continue;
        tongphu += A[i][n - 1 - i];
    }

    int AT[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            AT[i][j] = A[j][i];
        }
    }

    cout << tongchinh + tongphu << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << AT[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
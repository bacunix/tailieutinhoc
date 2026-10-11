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

int prime[1000001];

void sieve()
{
    for(int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 0; i <= 1000; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 1000000; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main() 
{
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);
    int n;cin >> n;

    sieve();

    for(int i = 0; i <= n; i++)
    {
        if(prime[i] == 1)
            cout << i << " ";
    }

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
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

void sang(int l, int r)
{
    int prime[r - l + 1];
    for(int i = 0; i <= r - l; i++)
    {
        prime[i] = 1;
    }

    for(int i = 2; i <= sqrt(r); i++)
    {
        for(int j = max(i * i, (l + i - 1)/i*i); j <= r; j+=i)
        {
            prime[j - l] = 0;
        }
    }

    for(int i = max(l, 2); i <= r; i++)
    {
        if(prime[i - l])
            cout << i << " ";
    }
}

int main() 
{
    int l, r;cin >> l >> r;
    sang(l, r);

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
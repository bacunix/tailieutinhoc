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

bool SNT(int n)
{
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

bool SHH(int n)
{
    int sum = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
            if(i != n / i && n / i != n)
                sum += n / i;
        }
    }
    return sum == n;
}

int main() 
{
    int n;cin >> n;

    if(SNT(n))
        cout << n << " la so nguyen to" << endl;
    else if(SHH(n))
        cout << n << " la so hoan hao" << endl;
    else cout << n << " khong la so nguyen to va khong la so hoan hao" << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
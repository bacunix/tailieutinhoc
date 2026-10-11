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

void pt(int n)
{
    for(int i = 2;i * i <= n; i++)
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if(n != 1)
        cout << n << " ";
}

void pt2(int n)
{
    for(int i = 2;i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            while(n % i == 0)
            {
                n /= i;
            }
        }
    }
    if(n != 1)
        cout << n << " ";
}

void pt3(int n)
{
    for(int i = 2;i * i <= n; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i; 
                cnt++;
            }
            cout << i << "(" << cnt << ")" << " ";
        }
    }
    if(n != 1)
        cout << n << "(" << 1 << ")" << " ";
}

void pt4(int n)
{
    for(int i = 2;i * i <= n; i++)
    {
        while(n % i == 0)
        {
            cout << i;
            n /= i;
            if(n != 1)
                cout << "x";
        }
    }
    if(n != 1)
        cout << n << " ";
}

void pt5(int n)
{
    for(int i = 2;i * i <= n; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                cnt++;
            }   
            cout << i << "^" << cnt;
            if(n != 1)
                cout << "*";
        }
    }
    if(n != 1)
        cout << n << "^1";
}

int main() 
{
    ll n;cin >> n;

    pt(n);
    cout << endl;
    pt2(n);
    cout << endl;
    pt3(n);
    cout << endl;
    pt4(n);
    cout << endl;
    pt5(n);

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
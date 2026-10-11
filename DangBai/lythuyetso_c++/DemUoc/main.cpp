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

int DemUoc(int n)
{
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(i != n / i)
                cnt += 2;
            else 
                cnt++;
        }
    }
    return cnt;
}

int DemUoc2(int n)
{
    int ans = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while(n % i == 0)
        {
            n /= i;
            cnt++;
        }
        ans = ans * (cnt + 1);
    }
    if(n != 1)
        ans *= 2;
    return ans;
}

int TongUocSo(int n)
{
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0) 
        {
            if(n / i != i)
                sum += i + (n / i);
            else sum += i;
        }
    }
    return sum;
}

int main() 
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        // cout << DemUoc(n) << "\n";
        // cout << DemUoc2(n) << "\n";
        cout << TongUocSo(n) << endl;
    }
    
    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
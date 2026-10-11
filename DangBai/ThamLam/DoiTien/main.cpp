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
	int cnt5, cnt2, cnt1;
	cnt5 = 0;
	cnt2 = 0;
	cnt1 = 0;
	
	cnt5 = n / 5;
    n %= 5;

    cnt2 = n / 2;
    n %= 2;

    cnt1 = n / 1;
    n %= 1;

    cout << cnt5 << " " << cnt2 << " " << cnt1 << endl;
	

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}












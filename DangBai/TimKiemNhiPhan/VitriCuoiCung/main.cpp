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

int bs(int a[], int n, int x)
{
	int res = -1;
	int l = 0, r = n - 1;

	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] == x)
		{
			res = m;
			l = m + 1;
		}
		else if(a[m] < x)
		{
			l = m + 1;
		}
		else r = m - 1;
	}

	return res;
}

int main() 
{
	int n,x;cin >> n >> x;
	int a[n];
	for(int i = 0; i < n ;i++)
	{
		cin >> a[i];
	}

	cout << bs(a, n, x) << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
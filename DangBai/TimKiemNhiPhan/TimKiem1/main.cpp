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
              
bool bs(int a[], int n, int x)
{
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(a[mid] == x)
		{
			return true;
		}
		else if(a[mid] < x)
		{
			l = mid + 1;
		}
		else 
		{
			r = mid - 1;
		}
	}
	return false;
}

bool binary_search(int a[], int n , int l, int r, int x)
{
	if(l > r)
	{
		return false;
	}
	int m = (l + r) / 2;
	if(a[m] == x)
	{
		return true;
	}
	else if(a[m] < x)
	{
		return binary_search(a, n, m + 1, r, x);
	}
	else 
	{
		return binary_search(a, n, l, m - 1, x); 
	}
}

int main() 
{
	int n,x;cin >> n >> x;
	int a[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << bs(a, n, x) << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
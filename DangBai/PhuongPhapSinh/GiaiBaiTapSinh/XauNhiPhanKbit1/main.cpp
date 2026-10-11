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

int n, k, a[20], ok;

void ktao()
{
	for(int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}

void sinh()
{
	int i = n; 
	while(i >= 1 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i == 0)
	{
		ok = 0;
	}
	else 
	{
		a[i] = 1;
	}
}

int check()
{
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 1) dem++;
	}
	return dem;
}

int main() 
{
	int t;cin >> t;
	while(t--)
	{
		cin >> n >> k; 
		ok = 1;
		ktao();

		while(ok)
		{
			if(check() == k)
			{
				for(int i = 1; i <= n ;i++)
				{
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
	}
	

  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
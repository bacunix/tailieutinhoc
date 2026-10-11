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

int n, ok;
string a[13];

void ktao()
{
	for(int i = 1; i <= n; i++)
	{
		a[i] = "A";
	}
}

void sinh()
{
	int i = n;
	while(i >= 1 && a[i] == "B")
	{
		a[i] = "A";
		i--;
	}
	if( i == 0)
	{
		ok = 0;
	}
	else 
	{
		a[i] = "B";
	}
}

int main() 
{
	int t;cin >> t;
	while(t--)
	{
		cin >> n;
		ok = 1;
		ktao();

		while(ok)
		{
			for(int i = 1;i <= n; i++)
			{
				cout << a[i];
			}
			cout << endl;
			sinh();
		}
	}

  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
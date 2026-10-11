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

int n, a[20], ok, cnt;

void ktao()
{      
	cnt = 1;
	a[1] = n;
}

void sinh()
{
	int i = cnt;
	while(i >= 1 && a[i] == 1)
	{
		i--;
	}

	if(i == 0)
	{
		ok = 0;
	}
	else 
	{
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];

		if(q)
		{
			for(int j = 1; j <= q; j++)
			{
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(r)
		{
			cnt++;
			a[cnt] = r;
		}
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
			cout << "(";             
			for(int i = 1; i <= cnt;i++)
			{
				if(i == cnt)
				{
					cout << a[i];
				}
				else {
					cout << a[i] << " ";
				}
			}
			cout << ")";
			sinh();
		}
		cout << endl;
	}
	
  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
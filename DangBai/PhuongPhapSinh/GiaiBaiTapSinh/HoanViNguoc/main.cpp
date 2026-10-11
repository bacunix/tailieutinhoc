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

int n, a[20], ok;

void ktao()
{
	int dem = 1;
	for(int i = n; i >= 1; i--)
	{
		dem++;
		a[dem] = i;
	}
}    

void sinh()
{
	int i = n -1;
	while(i >= 1 && a[i] < a[i+1])
	{
		i--;
	}
	if(i == 0)
	{
		ok = 0;
	}	
	else 
	{
		int j = n;
		while(a[i] < a[j])
		{
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while(l < r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
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
			for(int i = 1; i <= n;  i++)
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
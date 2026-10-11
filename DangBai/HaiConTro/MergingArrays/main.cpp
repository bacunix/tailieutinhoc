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
	int n, m;
	cin >> n >> m;
	int a[n], b[m];

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	int i = 0, j = 0;

	while(i < n && j < m)
	{
		if(a[i] <= b[j])
		{
			cout << a[i] << " "; i++;
		}
		else
		{
			cout << b[j] << " "; j++;
		}
	}
	while(i < n)
	{
		cout << a[i] << " "; i++;
	}
	while(j < m)
	{
		cout << b[j] << " "; j++;
	}

  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
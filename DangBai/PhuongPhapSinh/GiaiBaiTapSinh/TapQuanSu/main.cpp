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

int n, k,a[50], b[50], res = 0;
              
void next()
{
	int i = k; 
	while(i >= 1 && a[i] == n - k + i)
	{
		i--;
	}
	if(i == 0)
	{
		cout << k << endl;
	}
	else 
	{
		a[i]--;
		for(int j = i + 1; j <= k; j++)
		{
			a[j] = a[j-1] + 1;
		}

		for(int j = 1; j <= k; j++)
		{
			if(a[j] != b[j])
			{   	
				res++;
			}
		}
		cout << res << endl;
	}
}

int main() 
{
	int t;cin >> t;
	while(t--)
	{
		int n, k;cin >> n >> k;
		for(int i = 1; i <= k; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
              		
		next();	
	}

  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
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
	int n,m;cin >> n >>m;
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
	int ans = 0;
	while(i < n && j < m)
	{	
		if(a[i] < b[j])
		{
			i++; continue;
		}
		else if(a[i] > b[j])
		{
			j++; continue;
		}
		int dem1 = 0, dem2 = 0;
		while(i < n && a[i] == b[j])
		{
			dem1++; i++;
		}
		int tmp = a[i-1];
		while(j < m && tmp == b[j])
		{
			dem2++; j++;
		}
		ans += 1ll * dem1 * dem2;
	} 
	
	cout << ans << endl;

  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
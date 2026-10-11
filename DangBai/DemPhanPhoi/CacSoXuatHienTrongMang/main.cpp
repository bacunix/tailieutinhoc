#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

const int MAX_N = 1e6 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int marks[MAX_N];

int main() 
{                           
	int n;cin >> n;
	int a[n];	
	unordered_map<int, int> mp;

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for(int i = 0; i < n ;i++)
	{
		if(mp[a[i]] == 0)
		{
			cout << a[i] << " ";
			mp[a[i]] = 1;
		}
	}

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
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

void next(string s)
{
	int i = s.length() - 2;
	while( i >= 0 && s[i] >= s[i+1])
	{
		i--;
	}
	if(i == -1)
	{
		cout << "BIGGEST" << endl;
	}
	else 
	{
		int j = s.length() - 1;
		while(s[i] >= s[j])
		{
			j--;
		}
		swap(s[i], s[j]);
		int l = i + 1, r = s.length()-1;
		while(l < r)
		{
			swap(s[l], s[r]);
			l++;
			r--;
		}

		cout << s << endl;
	}
}

int main() 
{
	int t;cin >> t;
	while(t--)
	{
		string s;
		cin >> s;

		next(s);
	}

  cerr << "Time elapsed: " << TIME << "s.\n";
  return 0;
}
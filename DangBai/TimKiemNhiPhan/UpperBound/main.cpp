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
	int n,x;cin >> n >> x;
	int a[n];

    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }                

	auto it = upper_bound(a, a + n, x);

	if(it == a + n)
	{
		cout << "khong co phan tu nao lon hon " << endl;
	}
	else cout << *it << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
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
    string s;
    cin >> s;

    int demso, demchuthuong, demchuhoa, demkytudacbiet;
    demso = 0;
    demchuthuong = 0;
    demchuhoa = 0;
    demkytudacbiet = 0;

    for(int i = 0; i < (int)s.size(); i++)
    {
        if(isdigit(s[i])) demso++;
        else if(islower(s[i])) demchuthuong++;
        else if(isupper(s[i])) demchuhoa++;
        else if(ispunct(s[i])) demkytudacbiet++;
    }

    cout << "so chu so: " << demso << endl;
    cout << "so chu thuong: " << demchuthuong << endl;
    cout << "so chu hoa: " << demchuhoa << endl;
    cout << "so ky tu dac biet: " << demkytudacbiet << endl;

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
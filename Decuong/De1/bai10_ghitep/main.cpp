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
    ifstream input("input.txt");
    ofstream output("output.txt");

    int num;
    while(input >> num)
    {
        if(num % 2 == 0)
        {
            output << num << " ";
        }
    }

    cerr << "Time elapsed: " << TIME << "s.\n";
    return 0;
}
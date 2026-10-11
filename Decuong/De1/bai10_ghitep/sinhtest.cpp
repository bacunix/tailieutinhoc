#include <bits/stdc++.h>
using namespace std;

const string NAME = "main";
const int NTEST = 100;

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

long long Rand(long long L, long long R)
{
    assert(L <= R);
    return L + rd() % (R - L + 1);
}

int main()
{
    for(int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((NAME + ".inp").c_str());
        long long l = Rand(1, 1000);
        long long r = Rand(l, 1000);

        long long n = Rand(1, 100000);
        inp << l << " " << r << "\n";
        inp << n << "\n";
        for(int i = 0; i < n; i++)
        {
            inp << Rand(1, 1000) << " ";
        }
        inp.close();

        system((NAME + ".exe").c_str());
        system((NAME + "_trau.exe").c_str());
        if(system(("fc " + NAME + ".out " + NAME + ".ans").c_str()) != 0)
        {
            cout  << "Test " << iTest << " : WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << " : CORRECT!\n";
    }
    return 0;
}
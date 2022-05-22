#include <bits/stdc++.h>

using namespace std;
bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (checkPrime(n))
    {
        while (1)
        {
            n++;
            if (checkPrime(n))
            {
                if (n == m)
                {
                    cout << "Yes" << endl;
                }
                else
                    cout << "No" << endl;
            }
        }
    }

    return 0;
}
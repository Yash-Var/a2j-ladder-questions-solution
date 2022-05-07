#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    bool istrue = false;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
        sum2 += b[i];
        sum3 += c[i];
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
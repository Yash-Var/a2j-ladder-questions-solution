#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    long int sum1 = a + (b * c);
    long int sum2 = a * (b + c);
    long int sum3 = a * b * c;
    long int sum4 = (a + b) * c;
    long int sum5 = (a + b) + c;
    if (sum1 >= sum2 && sum1 >= sum3 && sum1 >= sum4 && sum1 >= sum5)
    {
        cout << sum1 << endl;
    }
    else if (sum2 >= sum1 && sum2 >= sum3 && sum2 >= sum4 && sum2 >= sum5)
    {
        cout << sum2 << endl;
    }
    else if (sum3 >= sum1 && sum3 >= sum2 && sum3 >= sum4 && sum3 >= sum5)
    {
        cout << sum3 << endl;
    }
    else if (sum4 >= sum1 && sum4 >= sum2 && sum4 >= sum4 && sum4 > sum5)
    {
        cout << sum4 << endl;
    }
    else
    {
        cout << sum5 << endl;
    }
}
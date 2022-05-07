#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max_index, min_index;
    int maxi = 0, mini = 101;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int a;
        cin >> a;
        if (a <= mini)
        {
            min_index = i;
            mini = a;
        }
        if (a > maxi)
        {
            max_index = i;
            maxi = a;
        }
    }
    if (max_index > min_index)
    {
        cout << (max_index - 1) + (n - min_index) - 1 << endl;
    }
    else
        cout << (max_index - 1) + (n - min_index) << endl;
}
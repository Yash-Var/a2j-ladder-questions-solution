#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int temp, count;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                temp = i;
                count = j;
            }
        }
    }
    int ans = 0;
    while (temp != 2 || count != 2)
    {
        if (temp < 2)
        {
            temp++;
            ans++;
        }
        else if (temp > 2)
        {
            temp--;
            ans++;
        }
        if (count < 2)
        {
            count++;
            ans++;
        }
        else if (count > 2)
        {
            count--;
            ans++;
        }
    }
    cout << ans << endl;
}
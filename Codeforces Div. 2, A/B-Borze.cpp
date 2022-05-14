#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = '0', mh = '1', rm = '2';
    string str;
    cin >> str;
    char yash[1000];

    int i = 0;
    int j = 0;
    while (i < str.size())
    {
        if (str[i] == '.')
        {
            yash[j] = ch;
            i++;
            j++;
        }
        else
        {
            if (str[i + 1] == '.' && i + 1 < str.size())
            {
                yash[j] = mh;
                j++;
            }
            else if (str[i + 1] == '-' && i + 1 < str.size())
            {

                yash[j] = rm;
                j++;
            }
            i += 2;
        }
    }
    for (int r = 0; r < j; r++)
    {
        cout << yash[r];
    }
    cout << endl;
}
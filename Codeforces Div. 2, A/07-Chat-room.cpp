#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str2 = "hello";
    int temp = str.size();
    int j = 0;
    int pos = 0;
    for (int i = 0; i < temp; i++)
    {
        if (str[i] == str2[j])
        {
            j++;
            pos++;
        }
    }
    if (pos == 5)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}


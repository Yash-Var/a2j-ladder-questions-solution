#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int upper = 0, lower = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }
    if (upper > lower)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<str<<endl;
    }
    else 
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str<<endl;
    }
}
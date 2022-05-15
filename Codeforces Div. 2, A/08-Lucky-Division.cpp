#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //     int ram=arr.size()-1;
    int ar[] = {4, 7, 44, 77, 47, 447, 474, 444, 777, 747, 744, 774, 477};
    bool isbool = false;
    for (int i = 0; i < 13; i++)
    {
        {
        if (n % ar[i] == 0)
            isbool = true;
            
        }
    }
    if (isbool)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
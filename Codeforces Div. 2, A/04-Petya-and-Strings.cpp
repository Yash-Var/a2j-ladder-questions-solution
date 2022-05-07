#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sl, sm;
    cin >> sl >> sm;
    int fans = 1;
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    transform(sm.begin(), sm.end(), sm.begin(), ::tolower);
    // cout<<sl<<endl;
    // cout<<sm;
    int temp = sl.size();
    // cout<<temp<<endl;
    int s = 0;
    int ans = sl.compare(sm);
    // cout<<ans;
    if (ans == 0)
    {
        cout << ans << endl;
    }
    else if (ans > 0)
    {
        cout << fans << endl;
    }
    else if (ans < 0)
    {
        fans = -1;
        cout << fans << endl;
    }
    //  cout<<ans<<endl;
    return 0;
}
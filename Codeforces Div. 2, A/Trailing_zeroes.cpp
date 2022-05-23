#include <bits/stdc++.h>
using namespace std;
// Native method

// long long  fact(int m){
//     if(m==0){
//         return 1;
//     }
//     return m*fact(m-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int count=0;
//     long long   f=fact(n);
//     while(f>0)
//     {
//         int digit=f%10;
//         f=f/10;
//         if(digit==0){
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// Efficient Method

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        count=count+n/i;
    }
    cout<<count<<endl;
}
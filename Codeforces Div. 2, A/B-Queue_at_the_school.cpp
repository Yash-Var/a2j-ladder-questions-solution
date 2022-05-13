//there is some compiler fault in VS-code and online compiler it show correct answer but on Codeforces compiler it show wrong answer.


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int t;
//     cin >> t;
  
        
//      string name;
//      cin>>name;
//     while (t--)
//     {
   
//         int i=0;
//         while(i<n)
//         {
//             if(name[i]=='B'){
//                 if(name[i+1]=='G' && i+1<n){
//                     swap(name[i],name[i+1]);
//                 // i+=2;
                
//                 } i+=2;
//             }
//             else{
//                 i++;
//             }
//         }
    
        
//     // cout<<name<<endl;
//     }
//     cout<<name<<endl;
// }


//This is correct answer on codefroces site but wrong on VS-code. 


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout << s << endl;
    return 0;
}
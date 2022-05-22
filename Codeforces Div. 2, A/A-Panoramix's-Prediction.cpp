#include <bits/stdc++.h>

using namespace std;
bool checkPrime(int n)
{
        int flag=0;
        int m=n/2;  
    for( int i = 2; i <=m ; i++)  
  {  
      if(n % i == 0)  
      {  
        //   cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  {
        //   cout<<"nvflkgkr"<<endl;
          return true;
  }
//       cout << "Number is Prime."<<endl; 

return false;
}
int main()
{
    int n, m;
    int flag=0;
    cin >> n >> m;
    if (checkPrime(n))
    {
           
        while (n<=m)
        {
            n++;
        //      cout<<"yes"<<endl;
            if (checkPrime(n))
            {
                if (n == m)
                {
                //     cout << "Yes" << endl;
                flag=1;
                  
                }
          break;
                //     cout << "No" << endl;
            }
        }
    }
    if(flag==1){
            cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
    

    return 0;
}
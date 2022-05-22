#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long count=0,temp=0;
    
    while(n > 0) {
  if(n % 10 == 4 || n%10==7){

    count++;
  }
  temp++;
  n=n/10;
}
if(count==temp){
    cout<<"Yes"<<endl;
}else cout<<"No"<<endl;
    return 0;
}
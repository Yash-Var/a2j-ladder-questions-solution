#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        long long value=(k*l)/nl;
        long long temp=c*d;
        long long count=p/np;
        long long ans=min((min(value,temp)),count);
        long long final=ans/n;
        cout<<final<<endl;
    return 0;
}

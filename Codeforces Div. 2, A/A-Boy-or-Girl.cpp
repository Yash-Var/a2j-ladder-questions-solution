#include<bits/stdc++.h>
using namespace std;
bool isEven(int n)
{
    if(n%2==0){
        return true;
    }
    
   return false;
}
int countDistinct(string s){
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    return m.size();
}
int main()
{
    string str;
    cin>>str;
    if(isEven(countDistinct(str)))
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
}
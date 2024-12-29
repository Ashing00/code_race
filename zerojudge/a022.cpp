#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second


int main (void){
    fast
    string str1,str2;

    cin>>str1;
    //cout<<str1<<endl;
    str2.resize(str1.size()); // make B big enough

    reverse_copy(str1.begin(),str1.end(),str2.begin());
    //cout<<str2<<endl;

   if (str1==str2){
     cout<<"yes"<<endl;
   }else{
    cout<<"no"<<endl;
   }
    
    return 0;
}
#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second


int main (void){
    fast
    LL sum;
    string str;
    char  str_chr[10005];

    while(cin>>str){
    //cout<<str.length()<<endl;

    sum=0;
    strcpy(str_chr,str.c_str());

    for (int i=0;i <str.length();i++ ){

      if (str[i]!='-'){
          sum=sum+(int(str_chr[i])-48);
      }
    }
     if (sum%3==0){
        cout<<"yes"<<endl;
     }else{
        cout<<"no"<<endl;
     }
    }
    return 0;
}
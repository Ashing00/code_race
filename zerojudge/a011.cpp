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
    string str;
    string str1;

    char chr_str[1000];
    int cnt;
    
    while(getline(cin,str)){ 
      //  getline(cin,str);
    
        strncpy(chr_str,str.c_str(),str.size());
       // cout<<chr_str[str.size()-1]<<endl;
           cnt=0;
       for (int i=0 ;i<str.size()-1;i++ ){

           if  (isalpha(chr_str[i])!=0 && isalpha(chr_str[i+1])==0){
              cnt++;
           }

       }
      if (isalpha(chr_str[str.size()-1])!=0){
        cnt++;
      }


        cout<<cnt<<endl;
    }


    return 0;
}
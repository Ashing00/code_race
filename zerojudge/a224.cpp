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
    int  alphat[26]={0};
    char chr_str[1005];
    int index;
    int od_cnt;
    
    while(cin>>str){ 
      //cin>>str;
       for (int i=0 ; i < 26 ; i++){
          alphat[i]=0;
       }
      
      strncpy(chr_str,str.c_str(),str.size());
      for (int i=0 ;i<str.size();i++ ){
           if  (isalpha(chr_str[i])!=0){
                index=int(tolower(chr_str[i]))-97;
                alphat[index]++;
           }
       }
       od_cnt=0;
       for (int i=0 ; i < 26 ; i++){
          //cout<<alphat[i]<<endl;
          if (alphat[i]%2!=0){
            od_cnt++;
          }
       }

      if (od_cnt>1){
         cout<<"no..."<<endl;
      }else{
          cout<<"yes !"<<endl;
      }


    }


    return 0;
}
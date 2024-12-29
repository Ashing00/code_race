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
    string col_str,num_str;
    int cnt;
    int col,row;
    int AAA[10000]={0};
    cin>>str;
    for (int i=0;i<str.size();i++){
        if  (isdigit(str[i])==0){
            cnt=i+1;
        }
    }
     //cout<<cnt<<endl;
     col_str=str.substr(0,cnt);
     num_str=str.substr(cnt,str.size()-cnt);
           
     //cout<<col_str<<endl;
     //cout<<num_str<<endl;

     col=0;
     for (int j=0;j<cnt;j++){
          AAA[j]=int(col_str[j])-65+1;
          
          col=col+AAA[j]*pow(26,cnt-j-1);
     }
    // cout<<col<<endl;
     row=stoi(num_str);
    // cout<<row<<endl;
  
    cout<<col*row<<endl;



    
    return 0;
}
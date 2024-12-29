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
    int n;
    int cnt_M,cnt_F;
    cin>>n;
    cin.ignore();

    for (int i=0;i<n;i++){
      cnt_M=0;
      cnt_F=0;
        while(getline(cin,str)){
           cnt_M=count(str.begin(),str.end(),'M');
           cnt_F=count(str.begin(),str.end(),'F');
         

          //cout<<cnt_M<<endl;
          //cout<<cnt_F<<endl;
        if (cnt_M>1 && cnt_F>1 && cnt_M==cnt_F){
          cout<<"LOOP"<<endl;
        }else{
          cout<<"NO LOOP"<<endl;
        }
       }

    }
    return 0;
}
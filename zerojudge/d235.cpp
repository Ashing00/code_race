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
    LL sum_od,sum_ev;
    string str;
    char  str_chr[1005];

   while(1){

    cin>>str;

    if(str[0]=='0') break;

    sum_od=0;
    sum_ev=0;
    strcpy(str_chr,str.c_str());

    for (int i=0;i <str.length();i++ ){

      if (i%2==0){
          sum_od=sum_od+(int(str_chr[i])-48);
      }else{
          sum_ev=sum_ev+(int(str_chr[i])-48);
      }
    }

     if (abs(sum_od-sum_ev)%11 == 0) {
      cout<<str<<" is a multiple of 11."<<endl;
     }else{
       cout<<str<<" is not a multiple of 11."<<endl;
     }
   
   }
    
    return 0;
}
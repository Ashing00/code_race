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
    int t;
    int str_len;
    int str_len_sqrt;
    string str;
    cin>>t;
    cin.ignore();

while (t--){

    getline(cin,str);
    str_len=str.size();
    str_len_sqrt=sqrt(str_len);
    if (str_len_sqrt*str_len_sqrt!=str_len){
        cout<<"INVALID"<<endl;
    }else{

      for (int i=0;i<str_len_sqrt;i++){
         for (int j=0;j<str_len_sqrt;j++){
            cout<<str[j*str_len_sqrt+i];
         }
      }
      cout<<endl;



    }

}

    return 0;
}
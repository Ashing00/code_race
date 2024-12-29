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
    int T;
    string line,str;
    stringstream ss;
    LL str_num;
    LL sum;
   
    cin>>T;
    cin.ignore();
    for (int i=0;i<T;i++){
       
       getline(cin,line);
       ss.str("");
       ss.clear();
       ss<<line;
       sum=0;
       while(ss>>str){
          if (isdigit(str[0])!=0){
              sum=sum+stoi(str);
          }
          
       }
       cout<<sum<<endl;
    }
    return 0;
}
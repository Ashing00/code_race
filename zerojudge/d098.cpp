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
    stringstream ss;
    string line;
    string str;
    bool isNum;
    int  sum;

    while(getline(cin,line)){
        ss.str("");
        ss.clear();
       ss<<line;
       sum=0;
       while(ss>>str){
       
        isNum=true;
        for (int i=0;i<str.size();i++){
          if (isdigit(str[i])==0){
             isNum=false;
             break;
          }
        }


        if (isNum==true){
            //cout<<str<<endl;
            sum=sum+stoi(str);
          }
  
       }
       cout<<sum<<endl;


    }
  

    return 0;
}
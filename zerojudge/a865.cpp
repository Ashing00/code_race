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
    int sum;
    vector<char> chr={'A','B','G','D','E','#','Z','Y','H','I','K','L','M','N','X','O','P','Q','R','S','T','U','F','C','$','W','3'};
    vector<int> num={1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900};
    
    while(cin>>str){

      if (str[0]=='.') break;
      sum=0;
      for (int i=0;i<str.size();i++){

          for (int k=0;k<27;k++){

             if(str[i]==chr[k]){
              //cout<<chr[k]<<endl;
              //cout<<num[k]<<endl;
              sum=sum+num[k];

             }


          }

      }

         cout<<sum<<endl;

    }

    return 0;
}
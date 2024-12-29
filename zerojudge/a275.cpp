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
    string str1,str2;
    int sum1=0;
    int sum2=0;

while (true){

    cin>>str1>>str2;
    if(str1=="STOP!!"){break;}
    //cout<<str1<<str2<<endl;
    sum1=0;
    sum2=0;

    for (int i=0;i<str1.size();i++){
         sum1=sum1+int(str1[i]);
         //cout<<sum1<<endl;
    }

    for (int j=0;j<str2.size();j++){
         sum2=sum2+int(str2[j]);
         //cout<<sum2<<endl;
    }

    if (sum1==sum2){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
 
}

    return 0;
}
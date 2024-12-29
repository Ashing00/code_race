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
    int b;
    int num;
    int d;
    int self_num;
    LL sum;
    string N;
    cin>>b;
    cin>>N;
    d=N.size();
    sum=0;
    for (int i=0;i<N.size();i++) {
        num=int(N[i])-48;
        sum=sum+pow(num,d);
        self_num=self_num+num*pow(b,d-i-1);

       //  cout<<num<<endl;
       //  cout<<pow(num,d)<<endl;
       //  cout<<self_num<<endl;
    }
    // cout<<sum<<endl;
    // cout<<self_num<<endl;

     if (sum==self_num){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
   
    return 0;
}
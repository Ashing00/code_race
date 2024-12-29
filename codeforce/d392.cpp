#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);

int main (void){
    fast
    string input_str;
    
    LL num,sum;
   // while(true){
       // getline(cin,input_str);
    while(getline(cin,input_str)){

    stringstream ss(input_str);
    sum=0;
        while(ss>>num)
             {
             sum=sum+num;
             }
            cout<<sum<<endl;

    }

    return 0;
}
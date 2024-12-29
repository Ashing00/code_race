#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second


int main (void){
    fast
    string str1;
    char chr_str[10];

    cin>>str1;
    strncpy(chr_str,str1.c_str(),7);

    for (int i=0;i<6;i++){
      cout<<abs(chr_str[i+1]-chr_str[i]);
    }
      cout<<endl;
    
    
    return 0;
}
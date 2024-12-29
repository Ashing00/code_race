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
 
    int a,b;
    
    while(cin>>a>>b){ 
      
        cout<<(b-a)/2+(a%2==0||b%2==0)  <<endl;
    }


    return 0;
}
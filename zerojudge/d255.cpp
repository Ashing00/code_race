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
    int N;
    int G;

    while(cin>>N){

        if (N==0) break;
    G=0;

    for(int i=1;i<N;i++){
       for(int j=i+1;j<=N;j++)
       {
         G+=__gcd(i,j);
       }
    }
    cout<<G<<endl;

    }
   
    return 0;
}
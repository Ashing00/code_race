#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

int F91(int n){

  if (n>=101){

    return (n-10);
  }else{

    return F91(F91( n+11));
  }

 
   return 0;


}

int main (void){
    fast
    string line;
    string line_revs;
    int count_a;
    int n;
    LL data;
    LL data_reves;


    while(cin>>n){
        if (n==0) break;
        cout<<"f91("<<n<<") = "<<F91(n)<<endl;
    }
    return 0;
}
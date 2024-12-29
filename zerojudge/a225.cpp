#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define ll                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);

bool cmp(int a,int b){

    if (a%10==b%10){
       return a > b;
    }else {
       return (a%10) < (b%10);
    }

}

int main (void){
    fast
    int n=0;
    
    while(cin>>n){
    vector<int> aa(n);
    for (int i=0;i<n;i++){
      cin>>aa[i];
    }
    sort(aa.begin(),aa.end(),cmp);
    for (int i=0;i<n-1;i++){
      cout<<aa[i]<<' ';
    }
    cout<<aa[n-1]<<' '<<endl;
    }
   
    return 0;
}
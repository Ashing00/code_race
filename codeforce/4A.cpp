#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>

using namespace std;


#define ll                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);

int main (void){
    fast
    int n;
    cin>>n;
    if (n==2){
       cout<<"NO"<<endl; 
    }else if (n%2==0){
        cout<<"YES"<<endl;

    }else{

         cout<<"NO"<<endl;
    }
    return 0;
}
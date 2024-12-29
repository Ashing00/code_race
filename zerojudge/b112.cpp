#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

int _max_GCD(int init,vector<int> b,int cnt){
   //int max;
   init=__gcd(b[0],b[1]);
   //cout<<init<<endl;
   if (cnt==b.size()-1){return (__gcd(init,b[cnt])); }

   else{
    cnt++;
    
    return(_max_GCD(init,b,cnt));
    
    }

}

int main (void){
    fast
    int N;
    int input_num;
    string line;

    while(cin>>N){
    vector<int> num;
 
    while(N--){
        cin>>input_num;
        num.push_back(input_num);
    }
    cout<<_max_GCD(0,num,0)<<endl;
    }
    return 0;
}
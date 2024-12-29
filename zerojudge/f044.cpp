#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second


int _2x2(int n,int all,int cnt){

    if (n==all){
       // cout<<n<<endl;
        return cnt;
    }
    if (n<all){
        cnt++;
       // cout<<n<<endl;
        return _2x2(2*n,all,cnt); 
    }

}


int main (void){
    fast

    LL n1,n2;
    LL N;
    LL all;
    LL cnt;


    cin>>n1>>n2;
    if (n1!=0){
    all=1+n2/n1;

    cnt=_2x2(1, all, 0);
    cout<<cnt<<endl;
    }else{
    cout<<0<<endl;

    }
    return 0;
}
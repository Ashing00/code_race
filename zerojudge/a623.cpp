#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

LL _n(int a ,int num){

    if (a==1) {
        return(num);
    }else{
        num=num*a;
        //cout<<num<<endl;
        a--;
       return(_n(a,num));
    }


}

int main (void){
    fast
    int n;
    int m;
    LL n1;
    LL m1;
    LL n1_m1;
    LL res;

    while(cin>>n>>m){

   n1=_n(n,1);
   m1=_n(m,1);
   n1_m1=_n((n-m),1);

    //n! / [m! x (n – m)!]
   res=n1/(m1*n1_m1);
   
   cout<<res<<endl;
    }
    return 0;
}
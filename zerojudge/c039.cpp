#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second


int _3Nadd1(int n,int cnt){

    if (n==1){
        cnt++;
       // cout<<n<<endl;
        return cnt;
    }
    if (n%2==0){
        cnt++;
       // cout<<n<<endl;
        return _3Nadd1(n/2,cnt); 
    }else{
         cnt++;
       // cout<<n<<endl;
        return _3Nadd1(3*n+1,cnt); 
    }

}


int main (void){
    fast
    stringstream ss;
    string line;
    int str;
    int n1,n2;
    int cnt;
    int max;


   while (cin>>n1>>n2)
   {
    
    if (n1>n2){
         max=0;
        for(int i=n2;i<=n1;i++){
             cnt=0;
            
             cnt=_3Nadd1(i,cnt);
             if (cnt>max){max=cnt;}
             //cout<<cnt<<endl;
        }
    }else{
        max=0;
        for(int j=n1;j<=n2;j++){
             cnt=0;
             
             cnt=_3Nadd1(j,cnt);
             if (cnt>max){max=cnt;}
            // cout<<cnt<<endl;
        }

    }
       cout<<n1<<' '<<n2<<' '<<max<<endl;
   
 
   }
  
    return 0;
}
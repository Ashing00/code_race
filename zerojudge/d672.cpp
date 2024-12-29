#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second
LL sum;


int mutil_9(string str,int cnt){
 
    //int cnt=0;
    int sum=0;

    cnt++;
    for (int i=0;i<str.size();i++){
    sum=sum+int(str[i]-'0');
    }

    if (sum<10 ){
     return cnt;
    }else{
    
    return mutil_9(to_string(sum),cnt);
    }

}


int main (void){
    fast
    stringstream ss;
    string line;
    int count=0;
    int n=0;
    int sum;
    
    
    while(cin>>line){

        if (line=="0") break;

    sum=0;
    for (int i=0;i<line.size();i++){
       sum=sum+int(line[i]-'0');
    }

        if (sum%9!=0){
            cout<<line<<" is not a multiple of 9."<<endl;
        }else{
           count=mutil_9(line,n);
           cout<<line<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;
        }

    }

  
    return 0;
}
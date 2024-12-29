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
    string str;
    int sum=0;
    bool state;

while (true){

    cin>>str;

    //if (str[0]=='0') break;
    if(str==to_string(0)){break;}
   
    sum=0;
    for (int i=0 ;i<str.size();i++){
         str[i]=tolower(str[i]);

        if (isalpha(str[i])==0){
            
            state=false;
            break;
        }else{
         sum=sum+ (int(str[i])-97+1);
         state=true;
        }


    }
    if(state){
      cout<<sum<<endl;
    }else{
      cout<<"Fail"<<endl;
    }
 
}



    return 0;
}
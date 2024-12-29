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
    int n;
    string yes_str="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    string str;
    cin>>n;
     
    while(n--){
        cin>>str;
        //------------function to convert string into lowercase---------------
        //transform(str.begin(), str.end(), str.begin(), ::tolower);
        //--------------------------------------------------------------------
        //cout<<str<<endl;

        if (yes_str.find(str)<string::npos){

            cout<<"YES"<<endl; 

        }else{
             cout<<"NO"<<endl;
        }

    }

    return 0;
}
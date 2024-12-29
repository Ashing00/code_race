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
    int len;
    string str[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>str[i];
        len=str[i].length();
        if (len<=10){
            cout<<str[i]<<endl;
        }else{
           
        cout<<str[i][0]<<len-2<<str[i][len-1]<<endl;
        }

    }

    return 0;
}
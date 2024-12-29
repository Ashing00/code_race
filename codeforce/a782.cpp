#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define ll                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);

int main (void){
    fast
    string str1;
    stringstream ss;
    string str[100];
    int n=0;
    while(true){
    getline(cin,str1);
    //cout<<str1<<endl;
    ss.str("");
    ss.clear();
    ss<<str1;
    n=0;
        while(true)
             {
             ss>>str[n];
             if(ss.fail()) break;//確認stringstream有正常流出，沒有代表空了
             n++;
             }

        if (str[0]=="END" ) break;;

        for (int i=0 ;i<n;i++){
            cout<<char(toupper(str[i][0]));
        }
            cout<<' '<<str[n-1]<<endl;

    }

    return 0;
}
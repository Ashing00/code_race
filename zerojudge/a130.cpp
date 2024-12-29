#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

bool cmp(pair<string,int> a, pair<string,int> b){
    return a.s<b.s;
}

int main (void){
    fast
    pair<string,int> data[10];
    int n;
    int max;
    int t;
    cin>>n;
    t=1;
    while(n--){
        cout<<"Case #"<<t<<':'<<endl;
      max=0;
      for (int i=0;i<10;i++){
         cin>>data[i].f>>data[i].s;
         if (data[i].s>max){
              max=data[i].s;
         }
      }
      //cout<<max<<endl;
      for (int i=0;i<10;i++){
         if (data[i].s==max){
             cout<<data[i].f<<endl;
         }
      }
      t++;

    }

    return 0;
}
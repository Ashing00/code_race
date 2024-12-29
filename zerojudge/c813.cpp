#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

int Fn(vector<int> num,int sum){

   string sum_str;
   char sum_num[11];
   vector<int> data2;
   for (int i=0;i<num.size();i++){
   sum=sum+num[i];
   }
   
   if (sum<10){
    return sum;
   }
   sum_str=to_string(sum);
   strncpy(sum_num,sum_str.c_str(),sum_str.size());
    data2.clear();
    for (int j=0;j<sum_str.size();j++){
        data2.push_back((sum_num[j]-'0'));
    }
   return Fn(data2,0);


}

int main (void){
    fast
    string line;
    vector<int> data;
    char num[11];



    while(cin>>line){

        if (line=="0") break;

    strncpy(num,line.c_str(),line.size());
    data.clear();
    for (int i=0;i<line.size();i++){
        data.push_back((num[i]-'0'));
    }



    cout<<Fn(data,0)<<endl;

    }

   
    return 0;
}
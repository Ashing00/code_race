#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

int Fn(string num,int cnt){

  string num_revs;
  string sum_str;
  string sum_str_revs;
  LL data;
  LL data_reves;
  LL sum;
  reverse_copy(num.begin(),num.end(), back_inserter(num_revs));
  data=stoi(num);
  data_reves=stoi(num_revs);
  sum=data+data_reves;


  //cout<<data<<endl;
  //cout<<data_reves<<endl;
  //cout<<sum<<endl;


  sum_str=to_string(sum);
  reverse_copy(sum_str.begin(),sum_str.end(), back_inserter(sum_str_revs));

  if (sum_str==sum_str_revs) {
    cout<<cnt<<' '<<sum_str<<endl;
    return cnt;
    }else{
      cnt++;
      return Fn(sum_str,cnt);
    }
  


   return 0;


}

int main (void){
    fast
    string line;
    string line_revs;
    int count_a;
    int n;
    LL data;
    LL data_reves;


    cin>>n;
    while(n--){
    cin>>line;
    count_a=Fn(line,1);
    }
   
    return 0;
}
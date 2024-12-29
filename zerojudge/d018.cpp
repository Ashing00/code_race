#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second


void stringsplit(const string &str, const char split ,vector<string> & res){

   if (str=="") return;

   string strs=str+split;
   size_t pos=strs.find(split);
   while (pos!=strs.npos)
   {
        string temp=strs.substr(0,pos);
        res.push_back(temp);
        strs=strs.substr(pos+1,strs.size());
        pos=strs.find(split);
   }
   
    return;
}

int main (void){
    fast
    stringstream ss;
    string line;
    string str;
    int N;
    int t=0;
    double f;
    double sum_o;
    double sum_e;
    vector<string> p;
    vector<int> idx;
    vector<double> data;
 
    
    while(getline(cin,line)){
        ss.str("");
        ss.clear();
        ss<<line;
        sum_o=0.0;
        sum_e=0.0;

        idx.clear();
        data.clear();

        while(ss>>str){

         //cout<<str<<endl;

         stringsplit(str,':',p);
         idx.push_back(stoi(p[t]));
         data.push_back(stof(p[t+1]));
         t=t+2;

        }

        for(int i=0;i<idx.size();i++){
          if (idx[i]%2!=0){
              sum_o=sum_o+data[i];
            }else{
              sum_e=sum_e+data[i];
            }
       }

         cout<<sum_o-sum_e<<endl;

    
   }
  
    return 0;
}
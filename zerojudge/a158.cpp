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
    stringstream ss;
    string line;
    int str;
    int N;
    int max;
    int data_gcd;
    vector<int> data;
    vector<int>::iterator it1;
    vector<int>::iterator it2;

    cin>>N;
    cin.ignore();
    while(N--){


        max=0;
        data_gcd=0;
        data.clear();
        getline(cin,line);
        ss.str("");
        ss.clear();
        ss<<line;
        while(ss>>str){
         data.push_back(str);
         
        }
        
       
        int data_size=data.size();
       // cout<<data_size<<endl;
      
        for(it1=data.begin();it1<data.end();++it1){
            //cout<<*it1<<endl;
            for(it2=data.begin();it2<data.end();++it2){
            //cout<<*it2<<endl;
            if (it1!=it2){
               data_gcd=__gcd(*it1,*it2);
            
               if (data_gcd>max){
                max=data_gcd;
              }
            }
           
           
           }
       }
       cout<<max<<endl;



    }
  

  
    return 0;
}
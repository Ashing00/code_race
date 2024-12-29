#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define ll                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);

int main (void){
    fast
    string str1,str_1,str_2,str_3;
    stringstream ss;
    char aa[100];

    cout<<"Input 3 strings:"<<endl;
    getline(cin,str1);
    cout<<str1<<endl;
    ss.clear();
    ss<<str1;
    ss>>str_1;
    ss>>str_2;
    ss>>str_3;
    cout<<str_1<<endl;
    cout<<str_2<<endl;
    cout<<str_3<<endl;

 
    cout<<"Input a string:"<<endl;
    cin>>str1;
    cout<<str1<<endl;
    strcpy(aa,str1.c_str());
    auto bb=str1.c_str();
    char *cc=new char[str1.length()+1];
    memmove(cc,str1.c_str(),str1.length());
    cout<<aa[0]<<endl;
    cout<<bb[1]<<endl;
    cout<<bb[2]<<endl;

    vector<char>vec_str(str1.begin(),str1.end());
    cout<<vec_str[3]<<endl;
    str1[3]='Q';
    cout<<vec_str[3]<<endl;
    cout<<str1[3]<<endl;

 
    vector<char>::iterator it;
    it=find(vec_str.begin(),vec_str.end(),'a');

    cout<<*it<<endl;

    int count_a=0;
    count_a=count(vec_str.begin(),vec_str.end(),vec_str[0]);
    cout<<vec_str.size()<<endl;
    cout<<count_a<<endl;



    delete [] cc;
    return 0;
}
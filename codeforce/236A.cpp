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
    cin>>str1;
    vector<char>vec_str(str1.begin(),str1.end());
    //cout<<vec_str[0]<<endl;

    vector<char>::iterator it;
    vector<char>vec_str_tmp;
    int count_a=0;
    int char_cnt=vec_str.size();
    for (int i=0;i<vec_str.size();i++){

        it=find(vec_str_tmp.begin(),vec_str_tmp.end(),vec_str[i]);
        if (it==vec_str_tmp.end()){
        count_a=count(vec_str.begin(),vec_str.end(),vec_str[i]);
        char_cnt=char_cnt-count_a+1;
        }
        vec_str_tmp.push_back(vec_str[i]);

    }

    if (char_cnt%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;   
    }

    return 0;
}
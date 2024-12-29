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
    //string str1;
    char str1[300];
    int t;
    int index;
    int chr_num[26]={0};
    int max=0;

    cin>>t;
    cin.ignore();

while (t--){

   //getline(cin,str1);
   //cin.ignore();
   //gets(str1);
   cin.getline(str1,300);
   //cout<<str1<<endl;

   max=0;
   index=0;
   for (int i=0;i<26;i++){
      chr_num[i]==0;
   }

   for (int i=0;i<strlen(str1);i++){
       if (isalpha(str1[i])!=0){
       index=int(tolower(str1[i]))-97;
      // cout<<index<<endl;
       chr_num[index]++;
       }
   }

 
   max=*max_element(chr_num,chr_num+26);
   //cout<<max<<endl;

   for (int i=0;i<26;i++){
      if (chr_num[i]==max){
          cout<<char(97+i);
      }
   }
   cout<<endl;


}

    return 0;
}
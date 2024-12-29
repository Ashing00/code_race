#include<bits/stdc++.h>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
#define LL                  long long int
#define fast                ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
#define f first
#define s second

bool _isprime(LL num){

    for (int i=2;i<int(sqrt(num))+1 ;i++){

      if (num%i==0){
         return false;
        }

    
    }
    return true;
}

int main (void){
    fast
    LL n1,n2;
    LL data_size;
    LL cnt_num;
    
    vector<int >::iterator it;
    vector<int > prime_table={2, 3, 5 ,7, 11, 13 ,17, 19, 23, 29, 31, 37, 41, 43, 47, 53 ,59, 61, 67, 71 ,73, 79, 83, 89 ,97};
    vector<int > prime_f;


    while(cin>>n1>>n2){
    data_size=n2-n1+1;
    prime_f.resize(1000, 1);

   // cout<<_isprime(111)<<endl;
  //  cnt_num=0;
  //  for (int k=n1;k<n2;k++){
  //       if (_isprime(k)==true){
  //       cnt_num++;
  //       }
  //  }
   // cout<<cnt_num<<endl;

    cnt_num=0;
  

          for (int i=n1;i<=n2;i++){
             for (int j=0;j<prime_table.size();j++){

              if (i<100 && i==prime_table[j] ){
                prime_f[i-n1]=1;
                break;
              }else if (i%prime_table[j]==0){
                prime_f[i-n1]=0;
                break;
              }


             }

         if (prime_f[i-n1]==1 ){

             if (_isprime(i)==true ){
                    prime_f[i-n1]=1;
                    
                }else{
                    prime_f[i-n1]=0;
                   
                }
                 continue;

         }



          }

         

         // for (it=prime_f.begin(); it<prime_f.end(); ++it){
          //  cout<<*it<<endl;
         //  }

            cnt_num=count(prime_f.begin(),prime_f.begin()+data_size,1);
           if (n1==1){cnt_num--;}
          cout<<cnt_num<<endl;
    }
    return 0;
}
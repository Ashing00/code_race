
#include<iostream>
#include<vector>
using namespace std;


int coinChange(vector<int>& coins, int amount) {

        vector<int> dp(amount+1,amount+1);
        //base case
        dp[0]=0;
        for (int i =0 ;i < dp.size();i++){

            for (int coin:coins){
                //sub-problem
                if (i-coin < 0) continue ;

                cout<< "i="<< i<< ", coin=" << coin << endl;
                cout<< "dp[i]="<< dp[i]<< ", dp[i-coin]=" <<dp[i-coin]<< endl;;

                dp[i]=min(dp[i],1+dp[i-coin]);
                cout<< "dp[i]="<< dp[i]<< ", dp[i-coin]=" <<dp[i-coin]<< endl;;

            }


        }

        return (dp[amount]==amount+1)? -1:dp[amount];

    }

int main(void){

vector<int> data={1,2,5};
int value=11;

cout << coinChange(data, value) ;

return 0;
}

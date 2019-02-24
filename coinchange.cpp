#include<bits/stdc++.h>
using namespace  std;
int coinChange(int coin[],  int numberofcoin,  int money){

int value[100];
memset(value,  0,  sizeof(value));
value[0] = 1;
for(int i = 0;  i<numberofcoin;  i++){
    for(int j = coin[i];  j<=money;  j++){
        value[j]+=value[j-coin[i]];
    }
}
return  value[money];


}

int main(){
    int coin[100],  money, numberofcoin;
    cout<<"number of  coin";

    cin>>numberofcoin;
    cout<<"coins:";
    for(int i = 0 ;  i<numberofcoin; i++){
        cin>>coin[i];

    }
    cout<<"money:";
    cin>>money;

   int num =  coinChange( coin,   numberofcoin,   money);
   cout<<"the number of ways:";
   cout<<num<<endl;

return 0;}


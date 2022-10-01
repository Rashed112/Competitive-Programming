/*
Approach-1: you can handle daywise with a single vector of it iteratively for iterative dp approach which is easier i think [ which i did in this problem]

Approach-2: you can handle 3 task of everyday with 3 different vector according to task for  top down dp approach which is more complex in this case i think
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   scanf("%d", &n);
   vector< int > dp(3);
   for(int i=0;i<n;i++){
      vector<int> c(3);
      vector< int > new_dp(3,0); //have to initialize with 0, cause we have to need a new array everytime for memoization locally neutrally
      for(int j=0;j<3;j++){
         scanf("%d", &c[j]);
      }
      
      //iterative approach of dp
     
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
               if(j!=k){ //checking all alternative selection where both indexes aren't same
                  new_dp[k]=max(new_dp[k], dp[j]+c[k]); //newly memoization for every row(or vector c) input locally in among 0th to 2th task
               }
            }
        }
        dp = new_dp; /*copy local memoization to global dp memoization and store total cost in three separate index where we are storing if 
                     we had started selecting 0th task what will be the total cost, if we had selected 1th task what will be the total cost etc*/
                     // btw a vector can be copied in this way
        
   }
   printf("%d\n", max(dp[0], max(dp[1], dp[2]))); //print which no selection will give you the most cost
  
}

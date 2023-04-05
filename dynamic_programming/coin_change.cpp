#include <bits/stdc++.h>
//Sucil_Dey
//Department of Information Technology
// J.G.E.C
#define f float
#define d double
#define newl cout<<endl
#define lp(l,u) for(int i=l;i<u;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define test(t) int t;cin>>t;while(t--)
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define write(a,n) for(int i=0;i<n;i++) cout<<a[i]
// #define int long long int
#define ui unsigned long long int
#define pub push_back
#define tata return 0 
#define ct cout
#define vec vector<int>
using namespace std;
int dp[1010];
int func(int amount,vector<int>& coins){
    long long ans=INT_MAX;
    if(amount==0) return 0;
    if(dp[amount]!=-1) return dp[amount];
for(auto coin:coins){
    if(amount>=coin){
ans=min(ans+0ll,1ll*func(amount-coin,coins)+1ll);
    }
}
return dp[amount]=ans;
}
int coinChange(vector<int>& coins, int amount) {
    memset(dp,-1,sizeof(dp));
        int ans=func(amount,coins);
        return ans>=INT_MAX?-1:ans;
    }
 
signed main(){
 vector<int>v={1,2,5};
 int amount =11;             
 cout<<coinChange(v,  amount);
 } 
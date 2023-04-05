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
#define int long long int
#define ui unsigned long long int
#define pub push_back
#define tata return 0 
#define ct cout
#define vec vector<int>
using namespace std;
int dp[1010];
int func(vector<int>&prices,int n){
    int ans=0ll;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    for(int len=1;len<=n;len++){
ans=max(ans,func(prices,n-len)+prices[len-1]);
    }
return dp[n]=ans;
}


    int cutRod(int price[], int n) {
        //code here
        memset(dp,-1,sizeof(dp));
        vector<int>prices(price,price+n);
        int p=func(prices,n);
        return p;
       
    }
    signed main(){
     int n;
     cin>>n;
     int price[n];
     read(price,n);

     cout<<cutRod(price,n)<<endl;  
 
 } 
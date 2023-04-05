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
const int N=1e5+7;
int k;
int h[N];
int dp[N];
int func(int i){
int cost=INT64_MAX;
if(i==1) return 0;
if(dp[i]!=-1) return dp[i];
for(int j=max(1ll,i-k);j<i;j++){
    cost=min(cost,func(j)+abs(h[i]-h[j]));
}
return dp[i]=cost;
}
signed main(){
int n;
cin>>n>>k;
memset(dp,-1,sizeof(dp));
for(int i=1;i<=n;i++) cin>>h[i];
cout<<func(n)<<endl;
 
 } 
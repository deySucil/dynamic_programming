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
const int N=1e6+7;
int h[N];
int dp[N];
int func(int i){
int cost=__INT64_MAX__;
if(i==1) return 0;
if(dp[i]!=-1) return dp[i];
// cost=min(cost, func(i-1)+abs(h[i]-h[i-1]));
if(i>2)
cost=min( func(i-1)+abs(h[i]-h[i-1]),func(i-2)+abs(h[i]-h[i-2]));
else
cost= func(i-1)+abs(h[i]-h[i-1]);

return dp[i]=cost;
}
 
signed main(){
   int n;
   cin>>n;
   memset(dp,-1,sizeof(dp));
   for(int i=1;i<=n;i++) cin>>h[i];
 cout<<func(n)<<endl;
 } 
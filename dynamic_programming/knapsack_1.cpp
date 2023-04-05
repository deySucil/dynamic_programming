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
int n,wt;
const int N=1e3;
int dp[101][100002];
int func(int idx,int wt,vector<int>&v,vector<int>&w){
int ans=0;
if(wt==0 || idx<0) return 0;
if(dp[idx][wt]!=-1) return dp[idx][wt];
if(wt>=w[idx]){
    ans=max(func(idx-1,wt-w[idx],v,w)+v[idx],func(idx-1,wt,v,w));
}
else ans=max(ans,(func(idx-1,wt,v,w)));
return dp[idx][wt]=ans;
}
 
signed main(){
//  int n,wt;
memset(dp,-1,sizeof(dp));
 cin>>n>>wt;
 vector<int>v(n),w(n);
 for(int i=0;i<n;i++){
  cin>>w[i]>>v[i];
 }             
 cout<<func(n-1,wt,v,w)<<endl;
 } 
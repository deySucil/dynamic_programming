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
vector<int>v(110),w(110);
int dp[110][100005];
int func(int idx,int curr_val){
    if(curr_val==0) return 0;
    if(idx<0 || curr_val<0) return 1e15;
    if(dp[idx][curr_val]!=-1) return dp[idx][curr_val];
int ans=min(func(idx-1,curr_val),func(idx-1,curr_val-v[idx])+w[idx]);
return dp[idx][curr_val]=ans;
}
 
signed main(){
  int n,wt;
  cin>>n>>wt;
  memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++){
    cin>>w[i]>>v[i];
}
int N=1e5;
for(int i=N;i>=0;i--){
    if(func(n-1,i)<=wt){
       cout<<i<<endl;
        break;
    }
}
 
 } 
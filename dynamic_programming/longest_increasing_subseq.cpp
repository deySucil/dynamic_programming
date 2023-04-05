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
const int N=1e3+7;
vector<int>a(N);
vector<int>dp(N,-1);
int func(int i){
int ans=1;
if(dp[i]!=-1) return dp[i];
for(int j=0;j<i;j++){
    if(a[j]<a[i]) ans=max(ans,func(j)+1);
}
return dp[i]=ans;
}
signed main(){
 int n;
 cin>>n;
 for(int i=0;i<n;i++) cin>>a[i];
int ans=1;
for(int i=0;i<n;i++){
    ans=max(ans,func(i));
}
 cout<<ans<<endl;
 } 
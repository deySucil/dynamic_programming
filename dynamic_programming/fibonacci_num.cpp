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
const int N=100;
int fb[N];
int Fib[N];
int fib(int n){
    if(n==0 ) return 0;
    if(n==1) return 1;
    if(fb[n]) return fb[n];
    //Memoisation --> O(2^n) reduces to O(n)
    return fb[n]=fib(n-1)+fib(n-2);
}

/*BY Using Dynamic Programming
Time Complexity :
O(2^n) reduces to O(n)

O(n!) reduces to O(2^n) [by Bitmasking Dp]
*/
 
signed main(){
  int n;
  cin>>n;
  cout<<fib(n)<<endl; 
/*Bottom Up Approach*/
Fib[1]=1;
for(int i=2;i<N;i++){
Fib[i]=Fib[i-1]+Fib[i-2];
}
 cout<<Fib[n]<<endl;
 } 
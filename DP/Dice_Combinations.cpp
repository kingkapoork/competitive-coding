#include<bits/stdc++.h>
//Everything is theoretically impossible untill it is done
#define ll long long 
#define vector vector<int>
#define set set<int>
#define stack stack<int>
#define io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pp pair<int,int>
#define mk make_pair
#define mod 1000000007
#define MAX INT_MAX
#define MIN INT_MIN
#define w(x) int x; cin>>x; while(x--)
#define set_built(x) __builtin_popcountll(x)
#define zero_built(x) __bultin_ctzll(x)
using namespace std;
int dp[1000005];
// recursive function()
ll int func(ll int n){
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    if(dp[n]!=0)
    return dp[n];
    int ans=(func(n-1)%mod+func(n-2)%mod+func(n-3)%mod+func(n-4)%mod+func(n-5)%mod+func(n-6)%mod)%mod;
    return dp[n]=ans;
}
// Asli function
void solve(){
   ll int n;
    cin>>n;
    memset(dp,0,sizeof(dp));
   cout<<func(n)<<endl;
}

//naam ka function
int main(){
        solve();
    return 0;
}
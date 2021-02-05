#include<bits/stdc++.h>
//Everything is theoretically impossible untill it is done
#define ll long long 
#define vector vector<int>
#define set set<int>
#define stack stack<int>
#define io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pp pair<int,int>
#define mk make_pair
#define mod 10000007
#define MAX INT_MAX
#define MIN INT_MIN
#define w(x) int x; cin>>x; while(x--)
#define set_built(x) __builtin_popcountll(x)
#define zero_built(x) __bultin_ctzll(x)
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int dp[n+1];
    for(int i=0; i<=n; i++){
        dp[i]=1;
    }
    dp[0]=0;
    int j=1;
    for(int i=2; i<=n;i++){
        for(int j=1;j*j<=i; j++){
            if(i%j==0){
                int k=j;
                int l=i/j;
                if(a[i]>a[j]&&dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                }
                 if(a[i]>a[l]&&dp[l]+1>dp[i]){
                    dp[i]=dp[l]+1;
                }
            }
        }
    }
    int mn=INT_MIN;
    for(int i=0; i<=n; i++){
     mn=max(mn,dp[i]);
    }
    cout<<mn<<endl;
}

int main(){
    w(t){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ans=0;
    if(a[0]==0)
    ans++;
        for(int i=1; i<n; i++){
         if(a[i]==1&&a[i-1]==1){
            ans++;
            a[i]=9;
            }
            else if(a[i]==2&&a[i-1]==2){
            ans++;
            a[i]=10;
            }
            else if(a[i]==0)
            ans++;
            else{
                if(a[i-1]==1)
                a[i]=2;
                else if(a[i-1]==2)
                a[i]=1;
            }
        }
    cout<<ans<<endl;
    return 0;
}
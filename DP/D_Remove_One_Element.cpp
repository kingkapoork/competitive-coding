#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int left[n+1];
     int ans=1;
    int right[n+1];
   for(int i=0; i<n; i++){
       left[i]=1;
       right[i]=1;
   }
    for(int i=1; i<n;i++){
        if(a[i-1]<a[i])
        left[i]=left[i-1]+1;
        ans=max(ans,left[i]);
    }
    for(int i=n-2; i>=0;i--){
        if(a[i+1]>a[i])
        right[i]=right[i+1]+1;
       // ans=max(ans,right[i]);
    }
    for(int i=0; i<n-2; i++){
        if(a[i]<a[i+2])
        ans=max(ans,left[i]+right[i+2]);
    }
    cout<<ans<<endl;
    return 0;
}
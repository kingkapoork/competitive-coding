#include<bits/stdc++.h>
using namespace std;
int inc(int a[], int n){
    vector<int>v;
    v.push_back(a[0]);
    for(int i=1; i<n; i++){
        if(v.back()<a[i])
        v.push_back(a[i]);
        else{
            auto it=lower_bound(v.begin(), v.end(),a[i])-v.begin();
            v[it]=a[i];
        }
    }
    return v.size();
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    cin>>a[i];
    cout<<inc(a,n)<<endl;
    return 0;
}
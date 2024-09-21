#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
int nc2(int n){
    return (n*(n-1))/2;
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int t=nc2(n);
    int inv=0;
    for(auto m:mp){
        inv+=nc2(m.second);
    }
    cout<<t-inv;

}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // int t=1;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
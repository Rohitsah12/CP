#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int a,b;
    cin>>a>>b;
    int ts=a+2*b;
    if(ts%2==0){
        int tg=ts/2;
        if(tg%2==0 || tg%2==1 &&  a>=2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"NO\n";
    }
     
    
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
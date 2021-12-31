#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

void solve()
{
    ll n,k; cin>>n>>k;
    ll cnt=0,z=0;unordered_set<ll> ss;
    vector<ll> a(n); 
    for(ll&i:a){
        cin>>i; 
        if(i!=0){
        ss.insert(i);
        cnt++;}
        else{z++;}
        
    }
    ll len=ss.size();
    if(z==n)
    {
        cout<<"YES\n";
        return;
    }
    if(cnt>0 and cnt!=len)
    {
        cout<<"NO\n";
        return;
    }

    bool ok=1;

    while(1)
    {
    int cc=0;
    for(int i=0;i<n;i++){
        cc+=(a[i]%k);
    }
    if(cc>1)
        ok=0;

    bool gd=0;
    for(int i=0;i<n;i++){
        a[i]/=k;
        gd|=a[i];
    }
    if(!gd)
    break;
    }

    if(ok)
    cout<<"YES\n";
    else
    cout<<"NO\n";
 
}

signed main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int t=1;
 cin>>t; 
 while(t--)
 {
    solve();
 }
 return 0;
}
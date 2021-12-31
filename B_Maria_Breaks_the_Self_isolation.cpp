#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

void solve()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n);
    int ans=1;

    for(int i=0;i<n;i++){
        if(a[i]<=i+1)
        ans=i+2;
    }

    cout<<ans<<"\n";
 
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
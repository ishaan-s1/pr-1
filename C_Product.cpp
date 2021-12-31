#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1000006,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

vector<ll> arr[N];

ll n,x,res=0;

void dfs(ll idx,ll f)
{
    if(f>x)
    return;
    if(idx==n+1)
    {
        if(f==x)
        {
            res++;
        }
        return;
    }
    for(auto j:arr[idx])
    {
        dfs(idx+1,f*j);
    }
}

void solve()
{
  cin>>n>>x;
  for(int i=1;i<=n;i++)
  {
      int l; cin>>l;
      arr[i].resize(l);
      for(ll&ii:arr[i])
      cin>>ii;
  }

  dfs(1,1);

  cout<<res<<"\n";

}

signed main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int t=1;
//  cin>>t; 
 while(t--)
 {
    solve();
 }
 return 0;
}
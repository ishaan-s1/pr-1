#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+2;
// typedef long long ll;
// const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

int a[N];
map<int,int> mp;

void solve()
{
  int n,k;
  cin>>n>>k;

  vector<int> a(n); for(int&i:a)cin>>i;

  mp[0]=1;

  int ss=0,ans=0;

  for(int i=0;i<n;i++){
    ss+=a[i];
    if(mp.count(ss-k))
    ans+=mp[ss-k];
    mp[ss]++;
  }
  cout<<ans<<"\n";
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
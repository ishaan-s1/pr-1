#include "bits/stdc++.h"
using namespace std;
using ll=long long;
#define   rdav(v)      for(auto&i:v)cin>>i;
#define   cel(n,d)     (((n)+(d)-1)/(d))
const ll N=2e5+10,mod=1e9+7;
template <typename... T>
void in(T &... args){((cin >> args), ...); }
template <typename... T>
void ps(T &&... args){ ((cout << args << " "), ...); }
template <typename... T>
void p(T &&... args){((cout << args << " "), ...);cout << '\n';}
inline void __pt(int x) {cerr << x;}
inline void __pt(long long x){cerr << x;}
inline void __pt(char x) {cerr << '\'' << x << '\'';}
inline void __pt(const string &x) {cerr << '\"' << x << '\"';}
inline void __pt(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> inline void __pt(const pair<T, V> &x) {cerr << '('; __pt(x.first); cerr << ','; __pt(x.second); cerr << ')';}
template<typename T> inline void __pt(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __pt(i); cerr << "}";}
inline void _pt() {cerr << "]\n";}
template <typename T, typename... V> inline void _pt(T t, V... v) {__pt(t); if (sizeof...(v)) cerr << ", "; _pt(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _pt(x)
#else
#define dbg(x...)
#endif
/*----------------------------------------------------------------*/
ll n,h;
vector<ll> a;

bool C(ll k)
{
	ll ss=0;
	for(int i=1;i<n;i++)
	{
		ss+=min(k,a[i]-a[i-1]);
	}

	ss+=k;


	return (ss>=h?1:0);
}


void solve()
{
  in(n,h);
  a.resize(n); 
  rdav(a);

  ll lo=1,hi=1e18;

  while(lo<hi)
  {
  	ll mid=lo+(hi-lo)/2;

  	if(C(mid))
  	{
  		hi=mid;
  	}
  	else
  	{
  		lo=mid+1;
  	}
  }

  p(lo);
  
}


/*----------------------------------------------------------------*/ 
signed main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("error.txt", "w", stderr);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cout<<setprecision(12)<<fixed;
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
} 
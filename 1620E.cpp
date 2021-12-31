#include "bits/stdc++.h"
using namespace std;
using ll=long long;
using vi=vector<int>;
using vl=vector<long long>;
#define   uset unordered_set
#define   umap unordered_map
#define   rdav(v)      for(auto&i:v)cin>>i;
#define   cel(n,d)     (((n)+(d)-1)/(d))
#define   lcm(m, n)    (((m)/__gcd((m),(n)))*(n))
const ll N=2e5+10,mod=1e9+7,inf=1e18;
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
 
void solve()
{
	int q; cin>>q; 
	rep(xyz,q)
	{
		int tp,x,y; cin>>tp;
		if(tp==1)
		{
			cin>>x;
		}
		else
		{
			cin>>x>>y;
		}

		
		
	}

   
  
  
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
  // cin>>t;
  while(t--){
    solve();
  }
  return 0;
} 
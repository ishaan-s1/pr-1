#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vl=vector<long long>;
#define   rdav(v)      for(auto&i:v)cin>>i;
#define   cel(n,d)     (((n)+(d)-1)/(d))
#define   pb           push_back
#define   f(i,x,y)     for(long long i=x;i<=y;i++)
#define   fr(i,x,y)    for(long long i=x;i>=y;i--)
#define   rep(i,n)     for(long long i=0;i<n;i++)
#define   reps(i,n)    for(long long i=1;i<=n;i++)
const ll N = 2e5+10,mod=1e9+7;
 
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
 
void solve()
{

    int n,tmp; in(n); vi a(n+1);
    for(int i=1;i<=n;i++)
    {
        in(tmp);
        a[tmp]=i;
    }

    int c=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i-1]>a[i]) c++;
    }
 
    p(c);
  
}


/*----------------------------------------------------------------*/ 
signed main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cout<<setprecision(12)<<fixed;
  int t=1;
//   cin>>t;
  while(t--){
    solve();
  }
  return 0;
} 

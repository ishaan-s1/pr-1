//snippet-4
#include "bits/stdc++.h"
 using namespace std;
 
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<typename T,typename cmp=less<T>> using oset=tree<T,null_type,cmp,rb_tree_tag,tree_order_statistics_node_update>;

#define   int long long
#define   V   vector
#define   Q   queue
#define   D   deque
#define   P   pair
#define   vi vector<int>
#define   vvi vector<vector<int>>
#define   pii pair<int,int>
#define   umap         unordered_map
#define   uset         unordered_set
#define   fi           first
#define   se           second

#define   rdav(v)      for(auto&i:v)cin>>i;
#define   tr(c,it)     for(auto it=(c).begin();it!=(c).end();it++)
#define   sz(c)        (int)((c).size())
#define   all(c)       (c).begin(),(c).end()
#define   pb           push_back

#define   f(i,x,y)     for(long long i=x;i<=y;i++)
#define   fr(i,x,y)    for(long long i=x;i>=y;i--)
#define   rep(i,n)     for(long long i=0;i<n;i++)
#define   reps(i,n)    for(long long i=1;i<=n;i++)

#define   cel(n,d)     (((n)+(d)-1)/(d))
#define   lcm(m, n)    (((m)/__gcd((m),(n)))*(n))

const int N=2e5+10,mod=1e9+7;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

template<typename T>
inline void parr(vector<T>const& v){tr(v,it) cout<<*it<<" "; cout<<"\n";}
template<typename T>
inline void pmat(vector<vector<T> > const& v){ int n=sz(v);int m=sz(v[0]); rep(i,n){ rep(j,m) cout<<v[i][j]<<" ";cout<<"\n";}cout<<"\n";}

template <typename... T>
void in(T &... args){((cin >> args), ...); }
template <typename... T>
void ps(T &&... args){ ((cout << args << " "), ...); }
template <typename... T>
void p(T &&... args){((cout << args << " "), ...);cout << '\n';}


inline void __pt(int x) {cerr << x;}
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

vi fact(N+5);
void init_fact(int p){
 fact[0]=1;
 f(i,1,N-1){
     fact[i]=(i*fact[i-1])%p;
 }
}

int modpow(int a,int b,int c){
 int res=1;
 while(b>0){
     if(b&1)
        res=(res*a)%c;
     b>>=1;
     a=(a*a)%c;
 }
 return res;
}

int modinv(int n,int p){return modpow(n,p-2,p);}

int nCr(int n,int r,int p){
 if(n<r) return 0;
 if(n==r) return 1;
 return (((fact[n]*modinv(fact[r],p))%p)*modinv(fact[n-r],p)%p)%p;
}

bool prm[N+2]; vi primes;
void sieve(){
 memset(prm,true,sizeof(prm));
 for(int i=2;i*i<=N;i++){
      if(prm[i]){
            for(int j=2*i;j<=N;j+=i)
                  prm[j]=false;} }
 for(int i=2;i<=N;i++){ if(prm[i]) primes.pb(i); }
}

/*----------------------------------------------------------------*/

int n;
void solve()
{

	in(n);

	if(n<=30)
		p("NO");
	else
	{
		p("YES");

		if(n==36 || n==40 || n==44)
			ps(6,10,15,n-31);
		else
			ps(6,10,14,n-30);
		p("");
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
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
} 
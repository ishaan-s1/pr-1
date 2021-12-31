
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
#define   MS  multiset
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
#define   rall(c)      (c).rbegin(),(c).rend()
#define   fill(a,b) memset(a, b, sizeof(a))
#define   pb           push_back
#define   fo1(i,x,y)   for(long long i=x;i<=y;i++)
#define   fo2(i,x,y)   for(long long i=x;i>=y;i--)
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
 for(int i=1;i<=N-1;i++){
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
 
void solve()
{

   int n,a,b; in(n,a,b);

   if(a>b)
   	swap(a,b);
   
   int idx=0;
   
   rep(i,9)
   {
   	if((1<<i)==n)
   		idx=i;
   }


  V<int> arr,tmp; 

  reps(i,n) 
     arr.pb(i);

  for(int i=1;i<=idx;i++)
  {
  	for(int j=0;j<sz(arr);j+=2)
  	{
  		if(arr[j]==a and arr[j+1]==b)
  		{
  			if(idx==i)
  			{
  				p("Final!");
  				return;
  			}
  			else
  			{
  				p(i);
  				return;
  			}
  		}
  		else
  		{
  			if(arr[j]==a or arr[j]==b)
  			{
  				tmp.pb(arr[j]);
  			}
  			else if(arr[j+1]==a or arr[j+1]==b)
  			{
  				tmp.pb(arr[j+1]);
  			}
  			else
  			{
  				tmp.pb(arr[j]);
  			}
  		}
  	}

  	arr.clear();

  	for(int xx:tmp)
  	{
  		arr.pb(xx);
  	}
  	tmp.clear();
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
  for(int T=1;T<=t;T++)
  {
    //cerr<<"testcase "<<T<<":\n";
    solve();
  }
  return 0;
} 
#include "bits/stdc++.h"
using namespace std;
using ll=long long;
#define int long long
using vi=vector<int>;
using vl=vector<long long>;
#define   rdav(v)      for(auto&i:v)cin>>i;
#define   cel(n,d)     (((n)+(d)-1)/(d))
#define   pb           push_back
#define   f(i,x,y)     for(long long i=x;i<=y;i++)
#define   fr(i,x,y)    for(long long i=x;i>=y;i--)
#define   rep(i,n)     for(long long i=0;i<n;i++)
#define   reps(i,n)    for(long long i=1;i<=n;i++)
const ll N=2e5+10,mod=1e9+7;

template <typename... T>
void in(T &... args){((cin >> args), ...); }
template <typename... T>
void ps(T &&... args){ ((cout << args << " "), ...); }
template <typename... T>
void p(T &&... args){((cout << args << " "), ...);cout << '\n';}
 
// inline void __pt(int x) {cerr << x;}
// inline void __pt(long long x){cerr << x;}
// inline void __pt(char x) {cerr << '\'' << x << '\'';}
// inline void __pt(const string &x) {cerr << '\"' << x << '\"';}
// inline void __pt(bool x) {cerr << (x ? "true" : "false");}
// template<typename T, typename V> inline void __pt(const pair<T, V> &x) {cerr << '('; __pt(x.first); cerr << ','; __pt(x.second); cerr << ')';}
// template<typename T> inline void __pt(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __pt(i); cerr << "}";}
// inline void _pt() {cerr << "]\n";}
// template <typename T, typename... V> inline void _pt(T t, V... v) {__pt(t); if (sizeof...(v)) cerr << ", "; _pt(v...);}
// #ifndef ONLINE_JUDGE
// #define dbg(x...) cerr << "[" << #x << "] = ["; _pt(x)
// #else
// #define dbg(x...)
// #endif

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
 
void solve()
{
	int w,h;
	cin>>w>>h;


   int k; cin>>k;
   int a1=-1,a2=1e6,x3=-1,x4=1e6;
   for(int i=0;i<k;i++){
   	int tmp; cin>>tmp;
   	a1=max(a1,tmp);
   	a2=min(a2,tmp);
   }

   cin>>k;
   for(int i=0;i<k;i++)
   {
   	int tmp; cin>>tmp;
   	x3=max(x3,tmp);
   	x4=min(x4,tmp);
   }

   int y1=-1,y2=1e6,y3=-1,y4=1e6;
   cin>>k;
   for(int i=0;i<k;i++){
   	int tmp; cin>>tmp;
   	y1=max(y1,tmp);
   	y2=min(y2,tmp);
   }

   cin>>k;
   for(int i=0;i<k;i++)
   {
   	int tmp; cin>>tmp;
   	y3=max(y3,tmp);
   	y4=min(y4,tmp);
   }

   int res=1;
   res=max(res,((x3-x4)*h));
   res=max(res,(y1-y2)*w);
   res=max(res,(a1-a2)*h);
   res=max(res,(y3-y4)*w);


  	p(res);


  
  
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
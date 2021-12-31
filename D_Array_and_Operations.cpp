// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const ll N = 2e5+10,mod=1e9+7;
// template<class S,class T>ostream &operator<<(ostream &os,const pair<S,T> &p){return os<<"("<<p.first<<","<<p.second<<")";}
// template<class T>ostream &operator<<(ostream &os,const vector<T> &p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
// template<class T>ostream &operator<<(ostream &os,const unordered_set<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
// template<class T>ostream &operator<<(ostream &os,const set<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
// template<class T>ostream &operator<<(ostream &os,const multiset<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
// template<class S,class T>ostream &operator<<(ostream &os,const map<S,T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
// template<class S,class T>ostream &operator<<(ostream &os,const unordered_map<S,T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
// template<class T>void dbs(string str,T t){cerr<<str<<":"<<t<<"\n";}
// template<class T,class...S>void dbs(string str,T t,S... s){int idx=str.find(',');cerr<<str.substr(0,idx)<<":"<<t<<",";dbs(str.substr(idx+1),s...);}
// #define   rep(i,n)     for(long long int i=0;i<n;i++)
// #define   pb(x)        push_back(x)
// #define   rdlv(v,s,e)  for(int i=s;i<=e;i++)cin>>v[i];
// #define   rdav(v)      for(auto&i:v)cin>>i;
// #define   lcm(m, n)    (((m)/__gcd((m),(n)))*(n))
// #define   cel(n,d)     (((n)+(d)-1)/(d))
// #define   p(x)         cout<<(x)<<"\n";
// #define   ps(x)        cout<<(x)<<" ";
// int n,k;
// int a[N];
 
// int32_t main()
// {
//   ios_base::sync_with_stdio(false);cin.tie(NULL);
//   int T1=1;
//   cin>>T1;
//   for(int T=1;T<=T1;T++)
//   {
    
//      cin>>n>>k;

//      for(int i=0;i<n;i++){
//          cin>>a[i];
//      }

//      sort(a,a+n);

//      int bg=n-1, ans=0;

//      for(int i=0;i<k;i++)
//      {
//          ans+=(a[bg-k]/a[bg]);
//          bg=bg-1;
//      }

//      bg=bg-k;
     
//      while(bg>=0)
//      {
//          ans+=a[bg];
//          bg=bg-1;
//      }


//     cout<<ans<<"\n";
    
    
    
//   }
//   return 0;
// }

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
int modinv(int n,int p){
 return modpow(n,p-2,p);
}
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
             prm[j]=false;
       }
 }
 f(i,2,N-1){ if(prm[i]) primes.pb(i); }
}

/*----------------------------------------------------------------*/
 
void solve()
{
  int n,k; cin>>n>>k;
  vector<int> a(n); for(int&i:a) cin>>i;

  sort(&a[0],&a[n]);

  int pt=n-1;
  int res=0;
  for(int i=0;i<k;i++)
  {
    res+=(a[pt-k]/a[pt]);
    pt--;
  }

  pt-=k;

  while(pt>=0)
  {
    res+=a[pt];
    pt--;
  }

  cout<<res<<"\n";
 
  
  
}


/*----------------------------------------------------------------*/ 
signed main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cout<<setprecision(12)<<fixed;
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
} 
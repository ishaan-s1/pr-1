#include<bits/stdc++.h>
using namespace std;

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
set<string> ss;

void perm(string pre,string suf)
{
    if(suf.size()==0)
    {
        ss.insert(pre);
        return;
    }

    for(int i=0;i<suf.size();i++)
    {
        perm(pre+suf[i],suf.substr(0,i)+suf.substr(i+1));
    }
}

void solve()
{
 
  string x; in(x);

  
  
  perm("",x);



  p(ss.size());

  for(auto it: ss)
  {
      p(it);
  }
  
  
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
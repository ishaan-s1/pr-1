#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7;
template<class S,class T>ostream &operator<<(ostream &os,const pair<S,T> &p){return os<<"("<<p.first<<","<<p.second<<")";}
template<class T>ostream &operator<<(ostream &os,const vector<T> &p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>ostream &operator<<(ostream &os,const unordered_set<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>ostream &operator<<(ostream &os,const set<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>ostream &operator<<(ostream &os,const multiset<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class S,class T>ostream &operator<<(ostream &os,const map<S,T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class S,class T>ostream &operator<<(ostream &os,const unordered_map<S,T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>void dbs(string str,T t){cerr<<str<<":"<<t<<"\n";}
template<class T,class...S>void dbs(string str,T t,S... s){int idx=str.find(',');cerr<<str.substr(0,idx)<<":"<<t<<",";dbs(str.substr(idx+1),s...);}
#define   rep(i,n)     for(long long int i=0;i<n;i++)
#define   pb(x)        push_back(x)
#define   rdlv(v,s,e)  for(int i=s;i<=e;i++)cin>>v[i];
#define   rdav(v)      for(auto&i:v)cin>>i;
#define   lcm(m, n)    (((m)/__gcd((m),(n)))*(n))
#define   cel(n,d)     (((n)+(d)-1)/(d))
#define   p(x)         cout<<(x)<<"\n";
#define   ps(x)        cout<<(x)<<" ";
 

long long area(ll x1,ll y1,ll x2, ll y2,ll x3, ll y3)
{
  long long ans=0;
  ans=(x1*abs(y2-y3)+x2*abs(y3-y1)+x3*abs(y1-y2));
  return ans;
}
 
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int T1=1;
  cin>>T1;
  for(int T=1;T<=T1;T++)
  {
    ll w,h; cin>>w>>h;

    ll k,tmp; 
    vector<ll> x0,xc,y0,yc;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>tmp;
        x0.push_back(tmp);
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
      cin>>tmp;
      xc.push_back(tmp);
    }

    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>tmp;
        y0.push_back(tmp);
    }

    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>tmp;
        yc.push_back(tmp);
    }

    //case1 x0
    long long res=0;

    ll x1=x0[0],x2=x0.back();

    res=(x2-x1)*h;
    
     x1=xc[0],x2=xc.back();
     res=max(res,(x2-x1)*h);

     ll y1=y0[0],y2=y0.back();
     res=max(res,(y2-y1)*w);

     y1=yc[0],y2=yc.back();
     res=max(res,(y2-y1)*w);

     cout<<res<<"\n";

  

    
    
    
  }
  return 0;
}

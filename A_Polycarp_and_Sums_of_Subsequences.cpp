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
 
 
int32_t main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int T1=1;
  cin>>T1;
  for(int T=1;T<=T1;T++)
  {
    //   cerr<<"# TESTCASE "<<T<<" :\n";
    
    vector<int> ar(7); for(int&i:ar)cin>>i; 

    int a=ar[0],b=ar[1];
    int c;
    if(a+b==ar[2]){c=ar[3];}else{c=ar[2];}
    ps(a) ps(b) ps(c)
    cout<<"\n";
    
    

  }
  return 0;
}


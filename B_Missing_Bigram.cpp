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
    int n; cin>>n; 
    vector<string> ss(n-2);
    for(string&i:ss)
    {
        cin>>i;
    }
    
    
    string ans; ans+=ss[0];

    for(int i=1;i<ss.size();i++)
    {
      
        if(ss[i-1][1]==ss[i][0])
            ans.push_back(ss[i][1]);
        else{
            ans.push_back(ss[i][0]);
            ans.push_back(ss[i][1]);}

    }
    if(ans.size()==n)
        p(ans)
    else{
        ans.push_back('a');
        cout<<ans<<"\n";
    }
    
  }
  return 0;
}

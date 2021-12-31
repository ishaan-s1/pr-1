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
    //   cerr<<"\n# TESTCASE "<<T<<" :\n";
    ll a,b; cin>>a>>b;

    string s1,s2; 
   
    s1=to_string(a);
    s2=to_string(b);
    
    int n1=s1.size();
    int n2=s2.size();

    while(n1<n2)
    {
        s1="0"+s1;
        n1++;
    }

    int p1=n1-1,p2=n2-1;
    bool f=0;
    string res="";
    string tmp=to_string(s2[p2]);
    while(p1>=0 and p2>=0)
    {

        if(s1[p1]>s2[p2])
        {
            int ss=(s2[p2]-'0')+10-(s1[p1]-'0');
            res=to_string(ss)+res;
            p2-=2;
            p1--;
        }
        else
        {
            int xx=(s2[p2]-'0')-(s1[p1]-'0');
            res=to_string(xx)+res;
            p2--;
            p1--;
        }
    }

    int st=0;
    for(;st<int(res.size());st++)
    {
        if(res[st]=='0')
        continue;
        else
        break;
    }

    string tt;
    for(int i=st;i<res.size();i++)
    {
        tt.push_back(res[i]);
    }

    int lx=tt.size()-1;

    // dbs("tt:",tt);
    

    int start=0;
    for(;start<s1.size();start++)
    {
        if(s1[start]!='0')
        break;
    }

    
    string axx=s1.substr(start);
    int naxx=axx.size();
    int lt=tt.size();
    
    reverse(axx.begin(),axx.end());

    string t22=tt;
    reverse(t22.begin(),t22.end());

    while(naxx<lt)
    {
        axx.push_back('0');
        naxx++;
    }

    // dbs("axx",axx);
    // dbs("t22",t22);

    
    int l11=axx.size(),l22=t22.size();
    string res2="";
    start=0;
    for(;start<t22.size() and start<axx.size();start++)
    {
        int ax=axx[start]-'0';
        int bx=t22[start]-'0';
         int cx=ax+bx;
        res2=to_string(cx)+res2;
    }
    

    while(start<axx.size())
    {
        char ch=axx[start];
        string xx; xx.pb(ch);
        // dbs("ch",ch);
        res2=xx+res2;
        start++;
    }

    while(start<t22.size())
    {
         char ch=axx[start];
         string xx; xx.pb(ch);
        //  dbs("ch",ch);
        res2=xx+res2;
        start++;
    }


    
    // dbs("res2",res2);

    if(res2==s2)
    {
        cout<<tt<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }

  }
  return 0;
}

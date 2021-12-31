#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

void solve()
{
 int n; cin>>n;
 int ar[n+1],ones=0;
 char c;
 bool fl=0;
 for(int i=1;i<=n;i++){
     cin>>c;
     ar[i]=c-'0';
     if(ar[i])
     ones++;
 }
int tmp[n+1]; for(int i=1;i<=n;i++)tmp[i]=ar[i];
int pt=n;
while(tmp[pt]==1)
    pt--;
vector<int> v;
sort(ar+1,ar+1+n);
for(int i=1;i<=n;i++)
{
    if(tmp[i]==1 and ar[i]==0)
    {
        fl=1;
        ones--;

        v.push_back(i);
        v.push_back(pt);
        
        pt--;

        while(tmp[pt]==1)
        pt--;

        if(ones==0)
        break;
    }
}
 

 if(fl){
     sort(&v[0],&v[v.size()]);
     cout<<"1\n";
     cout<<int(v.size())<<" ";
     for(int i:v)
     cout<<i<<" ";
     cout<<"\n";
 }
 else{
     cout<<"0\n";
 }




}

signed main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int t=1;
 cin>>t; 
 while(t--)
 {
    solve();
 }
 return 0;
}
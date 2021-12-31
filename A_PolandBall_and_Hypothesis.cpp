#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6+5,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

bool prm[1000005];
unordered_set<int> p;
void F()
{
    memset(prm,0,sizeof(prm));
    for(int i=2;i*i<N;i++)
    {
        if(!prm[i]){
           
            for(int j=i*i;j<N;j+=i){
                prm[j]=1;
            }
        }
       
    }
    
     for(int i=2;i<N;i++)
            if(!prm[i])
            p.insert(i);
}

void solve()
{
    int n; cin>>n;
    
    for(int i=1;i<=1000;i++){
        int pp=(n*i+1);
        if(p.find(pp)==p.end())
        {
            cout<<i<<"\n";return;
        }
    }
 
}

signed main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 F();
 int t=1;
//  cin>>t; 
 while(t--)
 {
    solve();
 }
 return 0;
}
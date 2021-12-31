#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))
int n,m,x,y;
void solve()
{
    cin>>n>>m;
    vector<int> ar(n+1,0);

    for(int i=0;i<m;i++){
        cin>>x>>y;
        ar[x]++;
        ar[y]++;
    }
    for(int i=1;i<=n;i++)
    cout<<ar[i]<<"\n";
 
}

signed main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int t=1;
//  cin>>t; 
 while(t--)
 {
    solve();
 }
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

void solve()
{
    int n; cin>>n;
    vector<int> a(2*n);
    for(int&i:a)
    cin>>i;
    sort(&a[0],&a[2*n]);
    n*=2;
    cout<<a[n/2]-a[n/2-1]<<"\n";
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
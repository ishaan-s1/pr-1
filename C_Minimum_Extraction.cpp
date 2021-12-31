#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10,mod=1e9+7;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

void solve()
{
    int n; cin>>n;

int a[n+1];

a[0]=0;

for(int i=1;i<=n;i++)cin>>a[i];

sort(a+1,a+1+n);

 int mn=a[1];
 for(int i=1;i<n;i++)
 {
     mn=max(mn,a[i+1]-a[i]);
 }
 cout<<mn<<"\n";
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
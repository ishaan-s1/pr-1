#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10,mod=1e9+7,inf=1e18;
#define lcm(m, n) (((m)/__gcd((m),(n)))*(n))
#define cel(n,d)  (((n)+(d)-1)/(d))

void solve()
{
 int n; cin>>n;
 n*=2;
 vector<int> a(n);
 for(int i=0;i<n;i++)
 cin>>a[i];

 sort(&a[0],&a[n]);

 int s1=0,s2=0;
 for(int i=0;i<n/2;i++)
    s1+=a[i];
 for(int i=n/2;i<n;i++)
    s2+=a[i];

 if(s1!=s2)
    {
        for(int i:a)
        cout<<i<<" ";
        cout<<"\n";
    }
    else
    {
        int st=0;
        while(a[st]==a[n-1])
        st++;

        if(st<n-1)
       {
           swap(a[n-1],a[st]);
            for(int i:a)
            cout<<i<<" ";
            cout<<"\n";
        }
        else{
            cout<<"-1\n";
        }
            
    }
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
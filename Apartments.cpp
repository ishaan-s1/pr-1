#include<bits/stdc++.h>
using namespace std;
template <typename... T>
void in(T &... args){((cin >> args), ...); }
template <typename... T>
void ps(T &&... args){ ((cout << args << " "), ...); }
template <typename... T>
void p(T &&... args){((cout << args << " "), ...);cout << '\n';}
/*----------------------------------------------------------------*/
void solve()
{
    int n,m,k,c=0;
 in(n,m,k);
 int a[n+1];
 for(int i=0;i<n;i++)cin>>a[i];

 sort(a,a+n);

 int tmp;
 multiset<int> ss;
 for(int i=0;i<m;i++)
 {
     cin>>tmp;
     ss.insert(tmp);
 }


 for(int i=0;i<n;i++)
 {
     int val=a[i]-k;
     auto it=ss.lower_bound(val);

     if(it!=ss.end() and *it<=a[i]+k)
     {
         ss.erase(it);
         c++;
     }

 }

 p(c);
  
  
}


/*----------------------------------------------------------------*/ 
signed main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cout<<setprecision(12)<<fixed;
  int t=1;
//   cin>>t;
  while(t--){
    solve();
  }
  return 0;
} 
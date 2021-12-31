#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6+2,mod=1e9+7;

bool ch[N];
unordered_set<int> prm;

void sieve()
{
    memset(ch,0,sizeof(ch));
    for(int i=2;i*i<N;i++)
    {
        if(ch[i]==0)
        {
            prm.insert(i);
            for(int j=i*i;j<N;j+=i)
            {
                ch[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    int t; cin>>t;
    while(t--)
    {
        int n,e; cin>>n>>e;
        
        vector<int> a(n);
        for(auto&i:a)cin>>i;

        vector<int> cnt(n);

        for(int i=0;i<n;i++)
        {
            
        }



                
            
    }


 
 return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define honey's code
#define FOR(v,sz) for(int v=0;i<sz;v++)
#define optimization()
#define endl '\n'
#define MAX 1e6
#define MOD 1e9+7
bool func(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return      (p1.second<p2.second);
    else return 0;
}
vector<string>v;
int main()
{
      ll test;
      cin>>test;
      while(test--){
      ll n,m;
      cin>>n>>m;
      ll f=0;
      string s;
        for(ll i=0; i<n; i++)
        {
            cin>>s;
            if(s.back()=='R')f++;
            v.push_back(s);
        }
        for(ll i=0;i<m;i++){
            if(s[i]=='D')f++;
        }
        cout<<f<<'\n';

      }

}


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
int main()
{
      int test;
      cin>>test;
      while(test--){
          int n;
          cin>>n;
          string s;
          cin>>s;
        //  ll h=s.size();
          map<char,int>mp;
          for(int i=0;i<n;i++){

              mp[s[i]]++;
          }
          int fl=0;
          for(auto it:mp){
                  if(it.second>=2){
                      fl=1;
                      break;
                  }
          }
          if(fl){
              cout<<n-2<<endl;
          }else{
              cout<<-1<<endl;
          }

      }

}



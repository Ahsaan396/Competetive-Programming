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
      ll n;
      cin >> n;
      ll arr[n+1];
      ll mx=0;
      ll cnt = 0;
      for(ll i=0;i<n;i++){
          cin>>arr[i];
      }
      for(ll i=0;i<n-1;i++){
         if(arr[i]<arr[i+1]){
             cnt++;
          }
          else{
               mx=max(mx,cnt);
               cnt=0;
          }
      }
      mx=max(mx,cnt);
      cout<<mx+1<<endl;

}



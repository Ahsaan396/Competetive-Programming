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
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(ll i=0; i<n; i++)
        {
            mp[v[i]]++;
        }
        ll fl=1;

        for(auto it: mp)
        {
            if(it.second%2==1)
            {
                fl=0;
                break;

            }

        }

        if(fl==0)
        {
            cout<<"Marichka"<<endl;
        }
        else
        {
            cout<<"Zenyk"<<endl;
        }

    }

}




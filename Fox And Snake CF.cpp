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
    ll n,m;
    cin>>n>>m;
    string s,d,f;
    for(ll i=0; i<m; i++)
    {
        s+='#';
    }
    for(ll i=0; i<m-1; i++)
    {
        d+='.';

    }
    d+='#';
    for(ll i=0; i<m-1; i++)
    {
        f+='.';

    }
    f='#'+f;
    for(ll i=1; i<=n; i++)
    {

        if(i%2)
        {

            cout<<s<<endl;
        }
        else
        {

            if(i%4==0)
            {
                cout<<f<<endl;
            }
            else
            {
                cout<<d<<endl;
            }

        }
    }



}



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
        string s;
        cin>>s;
        ll l=s.size(),f,r=0;
        ll cnt=0;
        ll len=s.size();
        for(ll i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                l=i;
                break;
            }
        }
        for(ll i=len-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                r=i;
                break;
            }
        }
        for(ll i=l; i<=r; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }

}



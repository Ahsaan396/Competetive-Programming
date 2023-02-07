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
    ll arr[6][6];
    ll diff,fif;
    ll sum;
    for(ll i=1; i<=5; i++)
    {
        for(ll j=1; j<=5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {

                diff=i;
                fif=j;

            }
        }
    }
    cout<<abs(3-diff)+abs(3-fif)<<endl;

}



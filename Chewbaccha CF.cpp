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

vector<ll>v;

void func(ll n)
{

    if(n>=10)
    {
        func(n/10);

    }

    ll dig=n%10;


    if((9-dig)<dig)
    {
        v.push_back(9-dig);
    }
    else
    {
        v.push_back(dig);
    }


}
int main()
{
    ll n;
    cin>>n;
    if(n<10)
    {
        cout<<n<<endl;
    }
    else
    {
        func(n);
        ll i=0;
        if(v[i]==0)
        {
            cout<<9;
            i++;
        }
        while(i<v.size())
        {
            cout<<v[i];
            i++;
        }
        //for(ll i=0; i<v.size(); i++)

    }

}





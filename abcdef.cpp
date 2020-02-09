#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct line 
{
    ll l,r,v;
}line;
vector<line> v;
map<ll,vector<line>> m;
ll n;
ll count(vector<line> &vec)
{
    ll mx=0;
    ll cnt=0;
    ll ma=vec[0].r;
    for(ll i=1;i<n;i++)
    {
        if(vec[i].l<=ma)
		{
			cnt++;
			ma=max(ma,vec[i].r);
		}
		else
		{
		    mx=max(mx,cnt);
		    cnt=0;
		    ma=vec[i].r;
		    
		}
    }
    mx=max(mx,cnt);
    return mx;
}
void solve()
{
    v.clear();
    m.clear();
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        line temp;
        cin >> temp.l >> temp.r >> temp.v;
        v.push_back(temp);
        m[temp.v].push_back(temp);
    }
    for(auto it:m)
    {
        if(it.second.size()>2)
        {
           ll ct=count(it.second);
            if(ct>2)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
    return;
}
int main()
{	ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

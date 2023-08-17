#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define V vector<ll>
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define pep(i, n, a) for (ll i = n; i >= a; i--)

bool fool(pair<ll, ll> f1, pair<ll, ll> f2)
{
    if (f1.first < f2.first)
        return false;
    else if (f1.first > f2.first)
        return true;
    return f1.second < f2.second;
}
void solve()
{
    ll n,k,m;
    cin>>n>>k>>m;
    ll t=-1, ans=0;
    rep(i,0,m){
    ll id;
    cin>>id;
    string s;
    cin>>s;
    string h=s.substr(0,2);
    string m=s.substr(3,2);
    ll hr=((h[0]-'0')*10)+(h[1]-'0');
    ll mn=((m[0]-'0')*10) +(m[1]-'0');
    ll total=(hr*60)+mn;
    if(t!=-1 && total-t>k) ans++;
    t=total;
    }
    ans++;
    cout<<ans<<endl;

}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

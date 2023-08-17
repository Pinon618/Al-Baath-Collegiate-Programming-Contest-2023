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
    ll x, y;
    cin >> x >> y;
    if (x == 0 && y==0)
    {
        cout <<0 << endl;
        return;
    }
    if (x == y)
    {
        cout << 1 << ' ' << x << endl;
        return;
    }

    ll l1, l2;
    l1 = (x+y) % 2;
    if (!l1)
    {
        ll a,b;
        a=(x+y)/2;
        b=(x-y)/2;
        if(a-b==y)
        cout<<2<<' '<<a<<' '<<b<<endl;
        else
        cout<<2<<' '<<b<<' '<<a<<endl;

    }
    else cout<<-1<<endl;
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

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
    ll n;
    cin>>n;
    ll cnt=0,ex=0;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            cnt+=2;
            if(i*i==n){
                ex=i;
                cnt--;
            }
        }
    }
    if(cnt%2==0) cout<<n<<' '<<cnt/2<<endl;
    else cout<<ex<<' '<<cnt<<endl;
}

int main()
{
    ll t = 1;
    //cin >> t;
    while (t--)
        solve();
}

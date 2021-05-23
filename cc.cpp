#include <bits/stdc++.h> 
using namespace std;
#define int long long
#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(ll i = a; i<b; i++)
#define index(i, n) for(ll i = 0; i<n; i++)
#define INF 2e18
const long long mod = 1e9 + 7;
#define dbg(x) cerr<<#x<<" = "<<x<<endl
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
 
void solve() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << i*i << "\n";
    }
    cout << endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int tt;
    cin >> tt;
    while(tt--) solve();
    return 0;
}
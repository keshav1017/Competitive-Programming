#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds;

#define int int_fast64_t

const int mod = 1e9 + 7;
const int inf = 1e18;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void setupIO() {
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout); 
    #endif  
}

void solve(){
    
}

int32_t main() {
    ios::sync_with_stdio(false);cin.tie(0);
    setupIO();
    int t; cin >> t; while(t--) solve();
    // solve();
}
#include <bits/stdc++.h>
using namespace std;

int n;
int a;
int b;
vector<long long> vec = {};

void solve(){
    vector<long long> pref(n + 1, 0);
    for(int i = 0; i < n; i++){
        pref[i + 1] = pref[i] + vec[i];
    }

    multiset<long long> ms;
    long long ans = -1000000000000000000LL;

    for(int i = a; i <= n; i++){
        ms.insert(pref[i - a]);
        if(i - b - 1 >= 0){
            ms.erase(ms.find(pref[i - b - 1]));
        }
        long long curr = pref[i] - *ms.begin();
        if(curr > ans){
            ans = curr;
        }
    }

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> a >> b;
    long long p;
    for(int i = 0; i < n; i++){
        cin >> p;
        vec.push_back(p);
    }

    solve();
    return 0;
}
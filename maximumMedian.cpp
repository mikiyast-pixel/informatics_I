#include <bits/stdc++.h>
using namespace std;
vector<int> vec = {};
int k;
int n;
vector<int> operations;
int m;
void solve(){
    sort(vec.begin(),vec.end());
    for(int i = m ; i < n;i++){
        operations.push_back(vec[i]);
    }
    int s = 0;
    for(int j =0;j<operations.size();j++){
        s+= operations[j];
    }
    cout<<s<<"\n";
    s+=k;
    int si = operations.size();
    cout << si <<"\n";
    if(si != 0){
        s/=si;
    }
    cout<<s<<endl;
}
int main(){
    cin>>n>>k;
    m = (n +1)/2 - 1;
    int p;
    for(int i = 0 ; i < n;i++){
        cin >> p;
        vec.push_back(p);
        
    }
    solve();
    return 0;
}
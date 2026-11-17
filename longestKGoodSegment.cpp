#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int k;
    scanf("%d %d", &n , &k);
    vector<int> v(n);
    for (int i = 0; i < n ; i++){
        scanf("%d", &v[i]);
    }
    int a = 0;
    int b = 0;
    int count = 0;
    pair<int,int> answer = {0, 0};
    map<int,int> map;
    while(b < n){
        if(map[v[b]] > 0){
            map[v[b]]++;
            if(b - a > answer.second - answer.first){
                answer = {a, b};
            }
            b++;
        }
        else if(count < k){
            map[v[b]] = 1;
            count++;
            if(b - a > answer.second - answer.first){
                answer = {a, b};
            }
            b++;
        }
        else{
            map[v[a]]--;
            if(map[v[a]] == 0){
                count--;
            }
            a++;
        }
    }
    a = answer.first + 1;
    b = answer.second + 1;
    printf("%d %d\n", a , b);
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
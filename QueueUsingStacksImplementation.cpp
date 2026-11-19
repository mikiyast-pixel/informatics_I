#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    vector<int> s1 = {};
    vector<int> s2 = {};

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push_back(x);
    }
    
    int pop() {
        int ans = peek();
        s2.pop_back();
        return ans;
    }
    
    int peek() {
        if(s2.size() == 0){
            while(s1.size() > 0){
                int last = s1.size() - 1;
                int p = s1[last];
                s1.pop_back();
                s2.push_back(p);
            }
        }
        int last = s2.size() - 1;
        return s2[last];
    }
    
    bool empty() {
        if((s1.size() == 0) && (s2.size() == 0)){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MyQueue q;
    q.push(1);
    q.push(2);
    cout << q.peek() << "\n";
    cout << q.pop() << "\n";
    if(q.empty()){
        cout << "true" << "\n";
    }
    else{
        cout << "false" << "\n";
    }

    return 0;
}
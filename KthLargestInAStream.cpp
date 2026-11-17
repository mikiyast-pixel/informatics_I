#include <bits/stdc++.h>
using namespace std;

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> topKScores;
    int targetRank;

    KthLargest(int k, vector<int>& nums) {
        targetRank = k;
        for (int score : nums) {
            add(score);
        }
    }
    
    int add(int val) {
        topKScores.push(val);
        if (topKScores.size() > targetRank) {
            topKScores.pop();
        }
        return topKScores.top();
    }
};

int main() {
    int k = 3;
    vector<int> initialScores = {4, 5, 8, 2};

    KthLargest admissionsTracker(k, initialScores);

    cout << admissionsTracker.add(3) << "\n";
    cout << admissionsTracker.add(5) << "\n";
    cout << admissionsTracker.add(10) << "\n";
    cout << admissionsTracker.add(9) << "\n";
    cout << admissionsTracker.add(4) << "\n";

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using namespace std;

class Compare {
public:
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; 
        }
        return a.first > b.first; 
    }
};

int main() {
    int n;
    cin >> n;
    
    priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;
    
    for (int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;
        pq.push(make_pair(s, x));
    }
    
    while (!pq.empty()) {
        auto p = pq.top();
        pq.pop();
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
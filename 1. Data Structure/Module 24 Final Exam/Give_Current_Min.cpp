#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> dataSet;
    
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        dataSet.insert(value);
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int command;
        cin >> command;
        
        if (command == 1) {
            if (dataSet.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << *dataSet.begin() << endl;
            }
        } else if (command == 2) {
            if (dataSet.empty()) {
                cout << "Empty" << endl;
            } else {
                dataSet.erase(dataSet.begin());
                if (dataSet.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << *dataSet.begin() << endl;
                }
            }
        } else if (command == 0) {
            int x;
            cin >> x;
            dataSet.insert(x);
            cout << *dataSet.begin() << endl;
        }
    }
    
    return 0;
}

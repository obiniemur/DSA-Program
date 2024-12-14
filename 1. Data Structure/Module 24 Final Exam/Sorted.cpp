#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    
    while (t--) {
        int n;  
        cin >> n;
        
        vector<int> l(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }
        
        set<int> unique_sorted_set(l.begin(), l.end());
        
        for (auto it = unique_sorted_set.begin(); it != unique_sorted_set.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
    
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> heights(n); 

        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        int left = 0, right = n - 1;
        int max_height = min(heights[left], heights[right]);
        int best_left = left, best_right = right;

        while (left < right) {
            int current_height = min(heights[left], heights[right]);
            if (current_height > max_height) {
                max_height = current_height;
                best_left = left;
                best_right = right;
            }

            if (heights[left] <= heights[right]) {
                ++left;
            } else {
                --right;
            }
        }

        cout << best_left << " " << best_right << "\n";
    }

    return 0;
}

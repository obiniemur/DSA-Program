#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  

    while (t--) {
        string sentence;
        getline(cin, sentence);

        
        map<string, int> wordCount;
        stringstream ss(sentence);
        string word;
        
        string maxWord;
        int maxCount = 0;
        
        while (ss >> word) {
            wordCount[word]++;
            
            if (wordCount[word] > maxCount) {
                maxCount = wordCount[word];
                maxWord = word;
            }
        }
        
        cout << maxWord << " " << maxCount << endl;
    }
    
    return 0;
}
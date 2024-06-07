#include <iostream>
#include <vector>
#include <string>
#include<climits>
using namespace std;

vector<string> commonChars(vector<string>& words) {
    vector<int> minFreq(26, INT_MAX);
    
    for (const string& word : words) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }
    
    vector<string> ans;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < minFreq[i]; j++) {
            ans.push_back(string(1, i + 'a'));
        }
    }
    
    return ans;
}

int main() {
    vector<string> words1 = {"bella", "label", "roller"};
    vector<string> result1 = commonChars(words1);
    for (const auto& ch : result1) {
        cout << ch << " ";
    }
    cout << endl; // Output: e l l

    vector<string> words2 = {"cool", "lock", "cook"};
    vector<string> result2 = commonChars(words2);
    for (const auto& ch : result2) {
        cout << ch << " ";
    }
    cout << endl; // Output: c o

    return 0;
}

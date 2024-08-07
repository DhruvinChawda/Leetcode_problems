class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> vec;
        for (int i = 0; i < n; ++i) {
            vec.emplace_back(heights[i], names[i]);
        }

        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
            return a.first > b.first;
        });

        vector<string> sortedNames;
        for (const auto &p : vec) {
            sortedNames.push_back(p.second);
        }

        return sortedNames;
    }
};

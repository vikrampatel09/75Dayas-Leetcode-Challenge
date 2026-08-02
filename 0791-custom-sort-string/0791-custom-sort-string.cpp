class Solution {
public:

    vector<int> pos;

    string customSortString(string order, string s) {

        pos.assign(26, 26);

        for (int i = 0; i < order.size(); i++)
            pos[order[i] - 'a'] = i;

        sort(s.begin(), s.end(), [this](char a, char b) {
            return pos[a - 'a'] < pos[b - 'a'];
        });

        return s;
    }
};
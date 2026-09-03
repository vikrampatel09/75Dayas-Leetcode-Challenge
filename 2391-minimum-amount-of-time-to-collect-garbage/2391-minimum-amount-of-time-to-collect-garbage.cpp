class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int n = garbage.size();

        // Prefix sum of travel
        for (int i = 1; i < travel.size(); i++) {
            travel[i] += travel[i - 1];
        }

        int total = 0;

        int lastM = -1;
        int lastP = -1;
        int lastG = -1;

        // Find total garbage and last position of each type
        for (int i = 0; i < n; i++) {

            for (char c : garbage[i]) {

                total++;

                if (c == 'M')
                    lastM = i;

                else if (c == 'P')
                    lastP = i;

                else if (c == 'G')
                    lastG = i;
            }
        }

        // Add travel time
        if (lastM > 0)
            total += travel[lastM - 1];

        if (lastP > 0)
            total += travel[lastP - 1];

        if (lastG > 0)
            total += travel[lastG - 1];

        return total;
    }
};
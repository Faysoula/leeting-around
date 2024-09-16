class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes(timePoints.size());

        for (int i = 0; i < timePoints.size(); ++i) {
            int h = stoi(timePoints[i].substr(0, 2));
            int m = stoi(timePoints[i].substr(3));
            minutes[i] = h * 60 + m;
        }

        sort(minutes.begin(),minutes.end());

        int mind = INT_MAX;
        for (int i = 0; i < minutes.size() - 1; ++i) {
            mind = min(mind, minutes[i + 1] - minutes[i]);
        }

        mind = min(mind, 24 * 60 - minutes.back() + minutes.front());

        return mind;
    }
};
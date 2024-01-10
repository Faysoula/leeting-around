class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());
        unordered_set<int> check;
        int maxStreak = 1;
        int currentStreak = 1;

        for (int i = 0; i < nums.size(); i++) {
            check.insert(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (check.find(nums[i] - 1) == check.end()) {
                int currentNum = nums[i];
                currentStreak = 1;

                while (check.find(currentNum + 1) != check.end()) {
                    currentNum++;
                    currentStreak++;
                }

                maxStreak = max(maxStreak, currentStreak);
            }
        }

        return maxStreak;
    }
};
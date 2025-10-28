class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        auto simulate = [&](int start, int dir) -> bool {
            vector<int> copy = nums;
            int pos = start;
            bool moveRight = dir == 1;

            while (pos >= 0 && pos < n) {
                if (copy[pos] == 0) {
                    pos += moveRight ? 1 : -1;
                } else {
                    copy[pos]--;
                    moveRight = !moveRight;
                    pos += moveRight ? 1 : -1;
                }
            }

            return all_of(copy.begin(), copy.end(), [](int x) { return x == 0; });
        };

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                if (simulate(i, 1)) count++;
                if (simulate(i, -1)) count++;
            }
        }

        return count;
    }
};

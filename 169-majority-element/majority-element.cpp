class Solution {
public:
    // Moore's Voting Algorithm TC-O(n), SC-O(1)
    int majorityElement(vector<int>& nums) {
        int candidate, count = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            if(count == 0) candidate = nums[i];
            if(nums[i] == candidate) count++;
            else count--;
        }
        return candidate;
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int count = 0;
//             for (int j = 0; j < n; j++) {
//                 if (nums[j] == nums[i]) count++;
//             }
//             if (count > n / 2)
//                 return nums[i];
//         }
//         return -1;
//     }
// };

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
       int n = nums.size();
        long long max_val = *max_element(nums.begin(), nums.end());
        long long min_val = *min_element(nums.begin(), nums.end());
        return (max_val - min_val) * k;
    }
};
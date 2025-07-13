class Solution {
public:
    void reverseHelper(int i, vector<int>& arr, int n) {
        if (i >= n / 2) return;
        swap(arr[i], arr[n - i - 1]);
        reverseHelper(i + 1, arr, n);
    }

    vector<int> sortArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums;
}
};

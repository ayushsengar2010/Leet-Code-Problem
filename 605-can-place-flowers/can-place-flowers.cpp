class Solution {
public:
    // Greedy Approach
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0);
                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1;
                    ++count;
                    if (count >= n) return true;
                }
            }
        }
        return count >= n;
    }
};

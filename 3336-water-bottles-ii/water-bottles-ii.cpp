class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            empty -= numExchange;
            int newBottle = 1;
            totalDrunk += newBottle;
            empty += newBottle;
            numExchange++;  
        }

        return totalDrunk;
    }
};

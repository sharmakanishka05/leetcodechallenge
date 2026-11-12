class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int consumed=numBottles;
        int emptybottles=numBottles;
        while(emptybottles>=numExchange){
            int extrabottles=emptybottles/numExchange;
            int rem=emptybottles%numExchange;
            consumed=consumed+extrabottles;
            emptybottles=extrabottles+rem;
        }
        return consumed;
    }
};
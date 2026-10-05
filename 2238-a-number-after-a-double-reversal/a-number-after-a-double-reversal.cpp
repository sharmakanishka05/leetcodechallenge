class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp = num;
        if (num == 0)
            return true;

        int rem = 0;
        int sum = 0;

        while (num > 0) {
            rem = num % 10;
            sum = sum * 10 + rem;
            num = num / 10;
        }

        int rem1 = 0;
        int sum1 = 0;
        while (sum > 0) {
            rem = sum % 10;
            sum1 = sum1 * 10 + rem;
            sum = sum / 10;
        }
        if (temp == sum1)
            return true;

        return false;
    }
};
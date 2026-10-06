class Solution {
public:
    int countOperations(int num1, int num2) {
        long long count=0;
        while( num2 !=0 && num1 !=0  ){
            if(num1>=num2){
                num1=num1-num2;
               
            }
            else if(num1<num2){
                num2=num2-num1;
             
            }
            count++;

        }
        return count;
    }
};
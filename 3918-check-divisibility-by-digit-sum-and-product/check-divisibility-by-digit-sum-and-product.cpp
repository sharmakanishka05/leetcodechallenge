class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
       int sum=0;
       int pro=1;
       int i=0;
       while(n>0){
        int rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
       } 
       return (original%(sum + pro) == 0);
    }
};
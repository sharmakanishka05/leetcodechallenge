class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
        return 0;
        if(n==1 || n==2)
        return 1;
        int a=1;
        int b=1;
        int c=2;
        
        for(int i=3;i<n;i++){
           int ans=a+b+c;
            a=b;
            b=c;
            c=ans;

        }
        return c;
    }
};
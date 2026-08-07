

class Solution {
    private:
int findProduct(int n){
      int product=1;
     while(n>0){
       int rem=n%10;
       product=product*rem;
       n=n/10;
         }  
      return product;
}
public:
    int smallestNumber(int n, int t) {
    
   while (findProduct(n) % t != 0) {
            n++;
        }

        return n;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       int maxProfit=0;
       int minPrice=*max_element(prices.begin(),prices.end());
      for(int price:prices){
        minPrice=min(minPrice,price);
        maxProfit=max(maxProfit,price-minPrice);
      }
      return maxProfit;
    }
};
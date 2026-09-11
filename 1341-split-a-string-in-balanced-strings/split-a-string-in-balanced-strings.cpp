class Solution {
public:
    int balancedStringSplit(string s) {
       int countR=0;
       int countL=0;
       int countBalance=0;
       for(char x:s){
        if(x=='R')
        countR++;
        else if(x=='L')
        countL++;

        if(countR==countL)
        countBalance++;
       }
      return countBalance ;
    }
};
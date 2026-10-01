class Solution {
public:
    bool judgeCircle(string moves) {
       int left=0;
       int right=0;
       int up=0;
       int down=0;
       for(char x:moves){
        if(x=='U')
        up++;

       else if(x=='D')
       up--;

       else if(x=='L')
        left++;

       else if(x=='R')
        left--;
       } 

       if(up==down && left==right)
       return true;

       return false;
    }
};
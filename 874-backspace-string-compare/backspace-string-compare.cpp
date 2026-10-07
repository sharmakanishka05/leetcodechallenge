class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string a1="";
       string a2="";
       for(char c:s){
        if(c=='#'){
            if(!a1.empty()){
                a1.pop_back();
            }
        }
        else 
        a1.push_back(c);
       }
        for(char c:t){
        if(c=='#'){
            if(!a2.empty()){
                a2.pop_back();
            }
        }
        else 
        a2.push_back(c);
       }
       return a1==a2;
    }
};
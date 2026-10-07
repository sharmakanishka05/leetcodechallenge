class Solution {
public:
    string clearDigits(string s) {
        string a="";
        for(char c:s){
            if(isdigit(c)){
                if(!a.empty()){
                    a.pop_back();
                }
            }
            else
            a.push_back(c);
        }
        return a;
        
    }
};
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> c;

        for(char x : s) {
            if(c.find(x) != c.end()) {
                return x;
            }

            c.insert(x);
        }

        return -1;
    }
};
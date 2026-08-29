class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>set;
        for(char c: jewels){
            set.insert(c);
        }
        int count=0;
        for(char c: stones){
            if(set.find(c) != set.end())
            count++;
        }
        return count;
    }
};
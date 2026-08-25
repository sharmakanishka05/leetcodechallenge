class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord=0;
        for(string s: sentences){
            int word=1;
            for(char c:s){
                if(c==' ')
                word++;
            }
              maxWord=max(maxWord,word);
        }
      
        return maxWord;
    }
};
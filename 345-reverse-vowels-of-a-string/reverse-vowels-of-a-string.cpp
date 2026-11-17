class Solution {
public:
bool isVowel(char ch){
    return(ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u');
}
    string reverseVowels(string s) {

        int n = s.size();
       int i=0;
       int j=s.size()-1;
       while(i<j){
        if(isVowel(s[i]) && isVowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(!isVowel(s[i])){
            i++;
        }
        else if(!isVowel(s[j])){
            j--;
        }
       }
        return s;
    }
};
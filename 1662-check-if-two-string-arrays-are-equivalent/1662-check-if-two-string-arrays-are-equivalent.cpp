class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word_1="";
        string word_2="";
        for(int i=0; i<word1.size(); i++)
        {
            word_1+=word1[i];
        }
        for(int i=0; i<word2.size(); i++)
        {
            word_2+=word2[i];
        }
        if(word_1==word_2)
        {
            return true;
        }
        return false;
        
    }
};
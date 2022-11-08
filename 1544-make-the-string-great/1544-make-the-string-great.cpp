class Solution {
public:
    string makeGood(string s) {
        string ans;
        for(int i=0; i<s.length(); i++)
        {
            ans.push_back(s[i]);
            while(ans.size() and (ans.back()==s[i+1]+32 or ans.back()+32==s[i+1]))
            {
                ans.pop_back();
                i++;
            }
        }
        return ans;
        
    }
};
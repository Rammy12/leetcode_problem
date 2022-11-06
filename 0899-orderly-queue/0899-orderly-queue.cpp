class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1)
        {
            string str2=s+s;
            string ans=s;
            for(int i=1; i<s.size(); i++)
            {
                string str=str2.substr(i,s.size());
                if(str<ans)
                {
                    ans=str;
                }
            }
            return ans;
        }
        sort(s.begin(),s.end());
        return s;
    }
};
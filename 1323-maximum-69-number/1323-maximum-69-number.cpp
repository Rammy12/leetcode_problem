class Solution {
public:
    int maximum69Number (int num) {
        string str= to_string(num);
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]!='9')
            {
                str[i]='9';
                break;
            }
        }
        int ans = stoi(str);
        return ans;
    }
};
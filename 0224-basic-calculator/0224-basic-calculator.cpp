class Solution {
public:
    int calculate(string s) {
        int sign=1;
        int sum=0;
        stack<int>st;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='0' and s[i]<='9')
            {
                long long int num=0;
                while(i<s.length() and s[i]>='0' and s[i]<='9')
                {
                    num=num*10+s[i]-'0';
                    i++;
                }
                i--;
                sum+=num*sign;
            }
            else if(s[i]=='+')
            {
                sign=1;
            }
            else if(s[i]=='-')
            {
                sign=-1;
            }
            else if(s[i]=='(')
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=1;
            }
            else if(s[i]==')')
            {
                int curr_sign = st.top(); 
                st.pop();
                int curr_val = st.top(); 
                st.pop();
                
                sum = curr_val + curr_sign * sum;
            }
        }
        return sum;
    }
};

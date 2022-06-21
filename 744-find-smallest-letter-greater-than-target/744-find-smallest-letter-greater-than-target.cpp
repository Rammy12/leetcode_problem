class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0;
        int h=n-1;
        if(letters[0]>target || letters[n-1]<=target)
            return letters[0];
        while(l+1<h)
        {
            long long int mid=(l+h)/2;
            
            if(letters[mid]<=target)
            {
                l=mid;
            }
            else
            {
                h=mid;
            }
        }
        return letters[h];
        
    }
};
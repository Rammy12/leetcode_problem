//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        int j=0,k=0;
        while(j<M||k<N)
        {
            if(j>=M)
            {
                if(T[k++]>35)
                return 0;
            }
            else if(k>=N)
            {
                if(S[j++]>35)
                return 0;
            }
            
            else if(S[j]<=35)j++;
            else if(T[k]<=35)k++;
            
            else if(S[j]=='A')
            {
                if(S[j++]!=T[k++]||j<k)return 0;
            }
            else if(S[j]=='B')
            {
                if(S[j++]!=T[k++]||k<j)return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    pair<int,int>p;
	    p.first=0;
	    p.second=-1;
	    int i=0; 
	    int j=0;
	    int maxsum=0;
	    int sum=0;
	    vector<int>ans;
	    while(j<n)
	    {
	        if(a[j]>=0)
	        {
	            sum+=a[j++];
	        }
	        else
	        {
	            if(maxsum<sum)
	            {
	                maxsum=sum;
	                p.first=i;
	                p.second=j-1;
	            }
	            sum=0;
	            i=j+1;
	            j+=1;
	        }
	    }
	    if(maxsum<sum)
	    {
	        maxsum=sum;
	        p.first=i;
	        p.second=j-1;
	    }
	    for(int i=p.first; i<=p.second; i++)
	    {
	        ans.push_back(a[i]);
	    }
	    if(ans.empty())
	    {
	        ans.push_back(-1);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends
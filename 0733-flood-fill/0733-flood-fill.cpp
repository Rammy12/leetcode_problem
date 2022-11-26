class Solution {
public:
    bool isValid(vector<vector<int>>& image,int i,int j,int colour,int n,int m)
    {
        if(i>=0 and i<n and j>=0 and j<m and image[i][j]==colour)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void floodFillRec(vector<vector<int>>& image,int i,int j,int color,int oldColur,int n,int m)
    {
        image[i][j]=color;
        if(isValid(image,i+1,j,oldColur,n,m))
        {
            floodFillRec(image,i+1,j,color,oldColur,n,m);
        }
        if(isValid(image,i,j+1,oldColur,n,m))
        {
            floodFillRec(image,i,j+1,color,oldColur,n,m);
        }
        if(isValid(image,i-1,j,oldColur,n,m))
        {
            floodFillRec(image,i-1,j,color,oldColur,n,m);
        }
        if(isValid(image,i,j-1,oldColur,n,m))
        {
            floodFillRec(image,i,j-1,color,oldColur,n,m);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int oldColour=image[sr][sc];
        if(color==oldColour)
        {
            return image;
        }
        floodFillRec(image,sr,sc,color,oldColour,n,m);
        return image;
    }
};
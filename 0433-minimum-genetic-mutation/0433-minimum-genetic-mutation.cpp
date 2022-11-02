class Solution {
public:
    int diffCnt(string &str1,string &str2) {
        int cnt = 0;
        for(int i = 0; i < str1.length(); i++) {
            if(str1[i] != str2[i]) {
                ++cnt;
                if(cnt > 1) {
                    return cnt;
                }
            }
        }
        
        return cnt;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        queue<pair<string,int>> geneQue;
        geneQue.push({start, 0});
        
        int len = bank.size();
        vector<bool> isUsed(len, false);
        
        while(!geneQue.empty()) {
            string gene = geneQue.front().first;
            int step = geneQue.front().second;
            
            if(end.compare(gene) == 0) {
                return step;
            }
            
            for(int i = 0; i < len; i++) {
                if(!isUsed[i] && diffCnt(gene, bank[i]) == 1) {
                    geneQue.push({bank[i], step+1});
                    isUsed[i] = true;
                }
            }
            
            geneQue.pop();
        }
        
        return -1;
    }
    
    
    
};
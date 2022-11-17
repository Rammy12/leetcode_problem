class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
       int area1 = (C - A) * (D - B);
        int area2 = (G - E) * (H - F);


        if (E >= C || G <= A || F >= D || H <= B) {
            return area1 + area2;
       }


int x1 = min(C, G);

int x2 = max(E, A);

int y1 = min(D, H);

int y2 = max(B, F);

int area3 = (x1 - x2) * (y1 - y2);

return area1 + area2 - area3;
    }
};

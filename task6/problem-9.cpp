class DetectSquares {
private:

int arr[1001][1001];
public:
    DetectSquares() {
    for(int i = 0; i < 1001; i ++)
     for(int j = 0; j < 1001; j ++)
       arr[i][j] = 0;
    }
    
    void add(vector<int> v) { //
    arr[v[0]][v[1]]++;
}

int count(vector<int> v) {
    int x1 = v[0], y1 = v[1], ans = 0;
    for(int x2 = 0; x2 < 1001; x2++) {
        if (x2 != x1) {
            int dist = abs(x1 - x2);
            int y2[2] = {y1 - dist, y1 + dist};
            for(int i = 0; i <= 1; i ++)
                if(y2[i] >= 0 && y2[i] < 1001)
                    ans += arr[x1][y2[i]]*arr[x2][y1]*arr[x2][y2[i]]; 
        }               
    }
    return ans;
}
};
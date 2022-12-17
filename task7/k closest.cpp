class Solution {
    static int distance(const vector<int>& p) {
        return p[0] * p[0] + p[1] * p[1];
    }
    
    static bool cmp(const vector<int>& p1, const vector<int>& p2) {
        return distance(p1) < distance(p2);
    }
    
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, const int& K) {
        nth_element(points.begin(), points.begin() + K, points.end(), cmp);
        return vector(points.begin(), points.begin() + K);
    }
};
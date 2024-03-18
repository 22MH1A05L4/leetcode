class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty() || points.size() == 0) {
            return 0;
        }
        
        // Sort the array of balloons by ending position
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int arrowPos = points[0][1];
        int arrowCnt = 1;
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] <= arrowPos) {
                continue;
            }
            // If the balloon's starting position isn't in the range,
            // then add to the counter and update the arrowPos
            arrowCnt++;
            arrowPos = points[i][1];
        }

        return arrowCnt;   
    }
};

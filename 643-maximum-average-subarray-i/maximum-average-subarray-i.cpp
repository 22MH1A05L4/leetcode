class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<k){
            return NAN;
        }
        double window_sum = 0;
        for(int i=0;i<k;i++){
            window_sum += nums[i];
        }
        double MaxAverage= window_sum/k;
        for(int i=k;i<n;i++){
            window_sum = window_sum - nums[i-k] +nums[i];
            double curr_avg = window_sum/k;
            MaxAverage = max(MaxAverage,curr_avg);
        }
        return MaxAverage;

        
    }
};
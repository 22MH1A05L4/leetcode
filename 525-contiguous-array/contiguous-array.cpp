class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> sum_indices;
        int max_len = 0;
        int count = 0;
        sum_indices[0] = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] ==0){
                count--;
            }
            else{
                count++;
            }
            if(sum_indices.find(count) != sum_indices.end()){
                max_len = max(max_len,i-sum_indices[count]);
            }
            else{
                sum_indices[count] =i;
            }
        }
        return max_len;
    }
};
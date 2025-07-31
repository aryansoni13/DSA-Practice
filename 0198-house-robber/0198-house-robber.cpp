class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        int prev = 0,curr = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int newmax = nums[i] + prev;

            prev = curr;

            curr = max(curr,newmax);
        }
        return curr;
    }
};
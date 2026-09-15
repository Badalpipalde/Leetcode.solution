class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        int low = 0;
        int high = n-1;
        while(low<high){
            sum = nums[low]+nums[high];
            if(target==sum){
                return {
                    low+1,high+1
                };
            }
            if(target>sum){
                low++;
            }
            if(target<sum){
                high--;
            }
        }
        return {-1};
    }
};
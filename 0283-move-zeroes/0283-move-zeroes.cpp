class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = nums.size();
        int b = 0;
        for(int i=0; i<k; i++){
            if(nums[i]!= 0){
                swap(nums[i],nums[b]);
                b++;
            }
        }
    }
};
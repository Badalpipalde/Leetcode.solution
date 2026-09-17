class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int pos = n-1;
        vector<int> res(n);
        while (low<=high){
            if(abs(nums[low])<abs(nums[high])){
                res[pos--] = nums[high]*nums[high];
                high--;
            }
            else{
                res[pos--]= nums[low]*nums[low];
                low++;
            }
        }
        return res;
    }
};
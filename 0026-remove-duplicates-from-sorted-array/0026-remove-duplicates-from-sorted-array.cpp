class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int res = 1;
        int next = 1;
        int end = nums.size();
        while(start<end){
            if(next == end) break;
            if(nums[start]==nums[next]){
                next++;
            }
            else{
                nums[start+1]= nums[next];
                next++;
                res++;
                start++;
            }
        }
        return res;
    }
};
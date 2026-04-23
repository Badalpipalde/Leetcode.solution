class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size= nums.size();
        int st= 0;
        int ed= size-1;

        while(st<=ed){
            int mid= st+(ed-st)/2;
            if(nums[mid]==target){
                return mid;
            }

            if(nums[mid] >= nums[st]){ //left sorted
                if(target >= nums[st] && target < nums[mid]){  //got issue in this line 
                    ed = mid-1;
                }
                else {\
                    st = mid+1;
                }
            }
            else{ //right sorted
             if(target > nums[mid] && target <= nums[ed]){
                st= mid+1;
             }
             else{
                ed= mid-1;
             }
            }

        }
        return -1;
    }
};
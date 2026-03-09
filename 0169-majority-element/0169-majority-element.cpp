class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size= nums.size();
        for(int val: nums){
            int ans=0;
            for(int K : nums){
                if(K== val){
                    ans++;
                }
            }
             if(ans>size/2){
                return val;
        }
        }
        return -1;
    } 
};
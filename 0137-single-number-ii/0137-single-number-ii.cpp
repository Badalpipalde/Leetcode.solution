class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans= 0;
        int ans1= 0;
        for(int val: nums){
            ans = (ans^ val) &~ans1;
            ans1= (ans1^val)& ~ans;

        }
        return ans;
    }
};
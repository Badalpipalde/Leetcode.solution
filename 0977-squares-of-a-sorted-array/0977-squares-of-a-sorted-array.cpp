class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        int s= 0;
        int e=n-1;
        vector<int> res(n);
        int k=n-1;

        while(s<=e){
            if(abs(nums[s])<abs(nums[e])){
                res[k--]= nums[e]*nums[e];
                e--;
            }
            else{
                res[k--] = nums[s]*nums[s];
                s++;
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n,1);

        for(int i=1; i<n; i++){
            ans[i]= ans[i-1]* nums[i-1];
        }

        int suffix =1;
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
    }
};



        // int size= nums.size();
        // vector<int> result(size);
        // for(int i= 0; i<size; i++){
        //     int product = 1;
        //     for(int j=0; j<size; j++ ){
        //         if(i==j){
        //             continue;
        //         }
        //         product *= nums[j];   //brut force approach 
        //     }
        //     result[i] = product;
        // } return result;
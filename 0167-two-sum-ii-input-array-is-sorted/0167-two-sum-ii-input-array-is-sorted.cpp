class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int st= 0;
        int end= n-1;
        while(st<end){
           int sum = arr[st]+arr[end];
           if(sum==target){
            return {st+1,end+1};
           }
           if(sum<target){
            st++;
           }
           if(sum>target){
            end--;
           }
          }
          return {};
        }
    };
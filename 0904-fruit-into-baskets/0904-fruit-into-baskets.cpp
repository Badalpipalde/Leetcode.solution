class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int high=0;
        int low=0;
        int res= INT_MIN;
        unordered_map<int,int>h;
        int n = arr.size();

        for(int high=0; high<n; high++){
            h[arr[high]]++;
            while(h.size()>2){
                h[arr[low]]--;
                if(h[arr[low]]==0){
                    h.erase(arr[low]);
                }
                low++; 
            }
                int len = high-low+1;
                res = max(res,len);
        }
        return res; 
    }
};
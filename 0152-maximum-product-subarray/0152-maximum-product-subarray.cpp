class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        int ans = a[0];
        int minend = a[0];
        int maxend = a[0];
        for(int i = 1; i<n; i++){
            int v1 = a[i];
            int v2 = minend*a[i];
            int v3 = maxend*a[i];
            minend = min(v1,min(v2,v3));
            maxend = max(v1,max(v2,v3));
            ans = max(ans, maxend);
        }
        return ans;
    }
};
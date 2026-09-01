class Solution {
public:

int find(vector<int>& f) {
    int maxi = 0;

    for(int i = 0; i < 256; i++) {
        maxi = max(maxi, f[i]);
    }

    return maxi;
}


    int characterReplacement(string s, int k) {

        vector<int> f(256, 0);

        int low = 0;
        int res = 0;

        for(int high = 0; high < s.size(); high++) {

            f[s[high]]++;

            int maxcnt = find(f);

            int len = high - low + 1;

            int diff = len - maxcnt;

            while(diff > k) {

                f[s[low]]--;
                low++;

                maxcnt = find(f);

                len = high - low + 1;

                diff = len - maxcnt;
            }

            res = max(res, len);
        }

        return res;
    }
};
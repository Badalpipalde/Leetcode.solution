class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwt= 0;
        int rightp = height.size()-1;
        int leftp = 0;
        while(leftp<rightp){
            int wdth= rightp-leftp;
            int ht= min(height[leftp],height[rightp]);
            int area= wdth*ht;
            maxwt= max(maxwt, area);
            height[leftp]<height[rightp] ? leftp++  :rightp--;
        }
        return maxwt;

    }
};
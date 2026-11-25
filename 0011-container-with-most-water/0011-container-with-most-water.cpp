class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxarea=INT_MIN;
       int l=0;
       int r=height.size()-1;
       while(l<r)
       {
        int lh=height[l];
        int rh=height[r];
        int h=(lh<rh)?lh:rh;
        int area=h*(r-l);
        maxarea=max(maxarea,area);
        if(lh<rh)
        l++;
        else
        r--;
       } 
       return maxarea;
    }
};
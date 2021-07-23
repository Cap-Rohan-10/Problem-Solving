class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int res = 0;
        
        while(start != end){
            
            int l = height[start] > height[end] ?height[end]  :  height[start] ;
            int w = (end - start);
            int area = l * w;
            
            res = area > res ? area : res ;
            
            if( height[start] < height[end]){
                start++;
            }
            else 
                end--;
        }
        return res;
    }
};

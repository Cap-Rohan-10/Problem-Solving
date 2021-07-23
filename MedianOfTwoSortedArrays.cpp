class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        int *arr = new int[len];
        
        copy(nums1.begin(), nums1.end(), arr);
        copy(nums2.begin(), nums2.end(), arr + nums1.size());
        
        sort(arr, arr + len);
        
        int mid = len >> 1;
        
        if (len%2 != 0) 
            return arr[mid];
        else
            return (double)(arr[mid - 1] + arr[mid]) / 2;
        
    }
};

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> output;
        int i = 0, j = 0;
        while ( i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                output.push_back(nums1[i]);
                output.push_back(nums2[j]);
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j]) {
                output.push_back(nums2[j]);
                j++;
            }
            else {
                output.push_back(nums1[i]);
                i++;
            }
        }
        while (i < nums1.size()) {
            output.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            output.push_back(nums2[j]);
            j++;
        }
        double median;
        if (output.size()%2 == 0) {
            int n = output.size()/2;
            median = (output[n-1]+output[n])/2;
        }
        else {
            int n = output.size()/2;
            median = output[n];
        }
        return median;
    }
};
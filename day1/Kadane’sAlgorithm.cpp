/*Array
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and return its sum and print the subarray.

Examples:

Example 1:

Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output: 6 */
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<arr.size();i++)
        {
            currsum=currsum+arr[i];
            maxsum=max(maxsum,currsum);
            if(currsum<0)
            {
                currsum=0;
            }
        }
        return maxsum;
        
    }
    
};

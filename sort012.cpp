/*Sort an array of 0s, 1s and 2s
Problem Statement: Given an array consisting of only 0s, 1s and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]*/
class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int low=0;
    int mid=0;
    int hi=arr.size()-1;
    while(mid<=hi)
    {
    switch(arr[mid])
    {
        case 0:
                swap(arr[low++],arr[mid++]);
                break;
          case 1:
      
                mid++;
                break;
            
        case 2:
            
                swap(arr[mid],arr[hi--]);
                break;
            
    }
    }
    }
};

/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

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

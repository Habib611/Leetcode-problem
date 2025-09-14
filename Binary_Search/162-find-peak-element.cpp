
// https://leetcode.com/problems/find-peak-element/?envType=problem-list-v2&envId=binary-search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[mid + 1]) {
             low = mid + 1;
            } else {
            high = mid;
            }
        }

        return low;
    }
};
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int l=nums.size();
//         int low=0;
//         int high=l-1;
//         nums[-1]=INT_MIN;
//         nums[l]=INT_MIN;
//         while(low<=high)
//         {
//             int mid=low+(high-low)/2;
//             if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
//             {
//                 return mid;
//             }
//             else if(nums[mid]>mid)
//             {
//                 high=mid-1;
//             }
//             else
//             {
//                 low=mid+1;
//             }

//         }

//         return {};
        
        
//     }
// };




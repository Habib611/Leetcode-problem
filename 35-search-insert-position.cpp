class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // here time complexity O(n).  here using linear search
        //     for (int i = 0; i < nums.size(); i++) {
        //         if (nums[i] == target) {
        //             return i;
        //         }

        //         else if (nums[i] >target) {

        //             return i;
        //         }
        //     }
        //     return nums.size();
        // }

        // But we need O(log n),, so using binary search

       class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = nums.size();
        int low = 0;
        int high = l - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
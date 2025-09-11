// https://leetcode.com/problems/single-number/description/?sorting=W3sic29ydE9yZGVyIjoiREVTQ0VORElORyIsIm9yZGVyQnkiOiJESUZGSUNVTFRZIn1d
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int l = nums.size();
        for (i = 0; i <l-1; i+=2) {

            if (nums[i] != nums[i + 1]) {
                return nums[i];
            
            }
        }

        return nums[i];
    }
};
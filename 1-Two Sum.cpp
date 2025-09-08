// https://leetcode.com/problems/two-sum/description/?sorting=W3sic29ydE9yZGVyIjoiREVTQ0VORElORyIsIm9yZGVyQnkiOiJESUZGSUNVTFRZIn1d
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int l=nums.size();
        for(int i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    return{i,j};
                }
            }
        }
        return{};
    }
    
};



// here O(n^2),but it can be solve O(n) if using hashmap...


// https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                nums[k]=nums[i];
                // nums[i]='_';
             k++;
            }

        }
        return k;

    }
};


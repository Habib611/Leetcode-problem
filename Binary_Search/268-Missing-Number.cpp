// https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=binary-search
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = nums.size();
        // int n = l;
        int low = 0;
        int high = l - 1;
        int mid;

        sort(nums.begin(),nums.end());     //O(nlogn)

        while(low<=high)             //  O(logn)
        {
            mid=(low+high)/2;
            if(nums[mid]>mid)
            {
                 high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        return low;
    }
};




// but this can be possible of O(n),

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        int n=l;
        int low=0;
        int high=l-1;
        int sum=0,sum1=0;
        int sum1=(n*(n+1))/2;
        for(int i=0;i<l;i++)
        {
            sum+=nums[i];
        }
       
        return sum1-sum;
    }
};

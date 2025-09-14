// https://leetcode.com/problems/valid-perfect-square/?envType=problem-list-v2&envId=binary-search
class Solution {
public:
    bool isPerfectSquare(int num) {
       
       if(num<2)
       {
        return true;
       }
       double num1=num;
       int low=2;
       int high=num;
       
        while(low<=high)
        {
        //    long long mid=(low+high)/2;
        long long mid = low + (high - low) / 2;
           long long sq=mid*mid;
            if(sq==num)
            {
                return true;
            }
            if(sq>num)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return false;
        
    }
};
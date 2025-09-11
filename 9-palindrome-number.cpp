class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int temp = x;
       long long int sum = 0,r;
        while (temp != 0) {
            r = temp % 10;
            sum = sum * 10 + r;
            temp=temp/10;
           
        }

        if (x == sum) {
            return true;
        } else {
            return false;
        }
    }
};
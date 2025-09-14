// https://leetcode.com/problems/valid-palindrome/description/?envType=problem-list-v2&envId=string
class Solution {
public:
    bool isPalindrome(string s) {

        int l = s.length();
        string str;
        for (int i = 0; i < l; i++) {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ||
                s[i] >= '0' && s[i] <= '9') {
                str += tolower(s[i]);

            } else {
                continue;
            }
        }

        // string n;

        // for(int i=0;i<l;i++)
        // {
        //     if(str>='a' && str<='z')
        //     {
        //         n+=str[i];

        //     }
        // }
        int n = str.length();
        string abc;

        for (int i = n - 1; i >= 0; i--) {
            abc += str[i];
        }
        if (str == abc) {
            return true;
        } else {
            return false;
        }
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        // string s1=s.strrev();
        int l = s.length();
        int count = 0;

        int flag = 0;
        for (int i = 0; i <= l; i++) {

            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {

                count++;
                flag = 1;
            }

            if (s[i] == ' ') {
                if (flag == 1) {
                    break;
                }
                continue;
            }
        }

        return count;
    }
};
// https://leetcode.com/problems/valid-anagram/description/?envType=problem-list-v2&envId=string
class Solution {
public:
    bool isAnagram(string s, string t) {

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        int a[27] = {0};

        for (int i = 0; i < s.length(); i++) {
            a[s[i] - 'a']++;
        }
    
        for (int i = 0; i < t.length(); i++) {
            a[t[i] - 'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};
// https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/description/?sorting=W3sic29ydE9yZGVyIjoiREVTQ0VORElORyIsIm9yZGVyQnkiOiJESUZGSUNVTFRZIn1d

class Solution {
public:
    int check_zero(int n) {

        while (n > 0) {
            int temp = n / 10;
        
            if (n % 10 == 0) {
                return 0;
            }

            n = temp;
        }

        return 1;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a, b;
        for (int i = 1; i < n; i++) {
            a = i;
            b = n - i;

            if ((check_zero(a) && check_zero(b)) == 1) {
                return {a, b};
            }
        }

        return {};
    }
};

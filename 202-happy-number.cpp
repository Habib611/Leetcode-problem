// https://leetcode.com/problems/happy-number/description/?envType=problem-list-v2&envId=math
int check_happy(int n) {
    int sum = 0;
    while (n > 0) {
        int r = n % 10;
        sum += r * r;
        n = n / 10;
    }
    return sum;
}
bool isHappy(int n) {

    while (n != 1 && n != 4) {
        n = check_happy(n);
    }

    return n == 1;
}
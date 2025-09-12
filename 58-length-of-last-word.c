void strrev1(char* s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
int lengthOfLastWord(char* s) {
    strrev1(s);
    int l = strlen(s);
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
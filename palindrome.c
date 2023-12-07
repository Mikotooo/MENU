#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    char strings[5][100];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    printf("Palindromes:\n");
    for ( i = 0; i < 5; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}


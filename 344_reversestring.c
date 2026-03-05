#include <stdio.h>
#include <string.h>

void reverseString(char s[], int sSize) {
    for(int i = 0; i < sSize / 2; i++) {
        char temp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = temp;
    }
}


int main(void) {
    int n;
    puts("Enter the size of string: ");
    scanf("%d", &n);

    char s[n];
    puts("Enter the string: ");
    scanf("%s", s);

    printf("Inital string %s\n", s);

    reverseString(s, n);

    printf("Reversed String %s\n", s);
    
    return 0;
}
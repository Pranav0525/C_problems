#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(unsigned int x) {
    if (x < 0) return false;
    unsigned int a = 0, remainder;


    int y = x;
    while(y != 0) {
        remainder = y % 10;
        a = a * 10 + remainder;
        y /= 10;
    }
    if (a == x) return true;
    else return false;
}

int main(void) {
    unsigned int n;
    puts("Enter the number that you want to check: ");
    scanf("%u", &n);

    printf("%d\n", isPalindrome(n));

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char s[]) {
    int len = strlen(s);
    char stack[len]; 
    int top = -1; 

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top++;
            stack[top] = s[i];
        } 
        else {
            if (top == -1) return false;
            char topChar = stack[top];
            if ((s[i] == ')' && topChar == '(') ||
                (s[i] == ']' && topChar == '[') ||
                (s[i] == '}' && topChar == '{')) {
                top--; 
            } else {
                return false; 
            }
        }
    }
    return top == -1;
}

int main(void) {
    int n;
    puts("Enter the size of the string: ");
    scanf("%d", &n);

    char s[n];
    puts("Enter the string: ");
    scanf("%s", s);

    int result = isValid(s);

    if (result == 1) puts("The entered string has valid brackets");
    else puts("The entered string has invalid brackets");

    return 0;
}
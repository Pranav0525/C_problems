#include <stdio.h>
int main() {
    int stack[100], n, choice, top = -1;
    printf("Enter size of stack: ");
    scanf("%d", &n);
    while (1) {
        printf("\n1. PUSH  2. POP  3. PEEK  4. EXIT: ");
        scanf("%d", &choice);
        if (choice == 1) {
            if (top == n - 1) printf("Stack Overflow\n");
            else {
                top++;
                printf("Enter value: ");
                scanf("%d", (stack + top));
            }
        }
        else if (choice == 2) {
            if (top == -1) printf("Stack Underflow\n");
            else {
                printf("Popped: %d\n", *(stack + top));
                top--;
            }
        }
        else if (choice == 3) {
            if (top == -1) printf("Stack Empty\n");
            else printf("Top element: %d\n", *(stack + top));
        }
        else if (choice == 4) return 0;
    }
}

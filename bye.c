#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Bye, World\n");
    int a = 10;
    int *p = &a;

    printf("%d", *p);
    printf("\n %d %d\n", p, &a);

    int A[5] = {2, 4, 6, 8, 10};
    int *ptr = A;

    for(int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }
    for(int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    // malloc

    int *pt;
    pt = (int *)malloc(5 * sizeof(int));
    pt[0] = 342; pt[1] = 23; pt[2] = 56; pt[3] = 86; pt[4] = 45;
    for(int i = 0; i < 5; i++) {
        printf("%d\n", pt[i]);
    }
    free(pt);

    return 0;
}
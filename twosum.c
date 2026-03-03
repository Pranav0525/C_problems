#include <stdio.h>
#include <stdlib.h>

int* twoSum(int nums[], int numsSize, int target, int* returnSize) {
    
    int *p = (int *)malloc(sizeof(int) * 2);
    
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                p[0] = i;
                p[1] = j;
                *returnSize = 2;
                return p;
            }
        }
    }

    *returnSize = 0;
    free(p);
    return NULL;
}

int main(void) {
    int n;
    puts("Enter the size of the array");
    scanf("%d", &n);

    int nums[n];
    puts("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    puts("Enter the target value: ");
    scanf("%d", &target);

    int returnSize;
    int *result = twoSum(nums, n, target, &returnSize);

    if (result != NULL) {
        printf("%d %d\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution\n");
    }

    return 0;
}
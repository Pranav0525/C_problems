#include <stdio.h>
#include <string.h>
void display(char names[][50], int marks[], int n) {
    for(int i = 0; i < n; i++)
        printf("%s %d\n", names[i], marks[i]);
}
void sortByMarks(char names[][50], int marks[], int n) {
    char tempName[50];
    int tempMark;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(marks[i] < marks[j]) {
                tempMark = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMark;

                strcpy(tempName, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], tempName);
            }
        }
    }
}
void sortByName(char names[][50], int marks[], int n) {
    char tempName[50];
    int tempMark;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                tempMark = marks[i];
                marks[i] = marks[j];
                marks[j] = tempMark;

                strcpy(tempName, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], tempName);
            }
        }
    }
}

int searchByName(char names[][50], int n, char key[]) {
    for(int i = 0; i < n; i++)
        if(strcmp(names[i], key) == 0)
            return i;
    return -1;
}

float calculateAverage(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += marks[i];
    return (float)sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    char names[n][50];
    int marks[n];

    for(int i = 0; i < n; i++)
        scanf("%s %d", names[i], &marks[i]);

    printf("Student List:\n");
    display(names, marks, n);

    sortByMarks(names, marks, n);
    printf("Sorted by Marks:\n");
    display(names, marks, n);

    sortByName(names, marks, n);
    printf("Sorted by Names:\n");
    display(names, marks, n);

    char key[50];
    scanf("%s", key);
    int pos = searchByName(names, n, key);

    if(pos != -1)
        printf("%s found at position %d with marks %d\n",
               names[pos], pos+1, marks[pos]);

    printf("Average Marks: %.2f\n", calculateAverage(marks, n));

    sortByMarks(names, marks, n);
    printf("Top Scorer:\n%s with %d marks\n", names[0], marks[0]);

    return 0;
}

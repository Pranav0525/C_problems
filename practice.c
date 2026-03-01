#include <stdio.h>

struct rectangle {
    int length;
    //float breadth;
    //char x;
};
struct better {
    long long int s;
    double d;
    //float f;
    char c;
};
struct worse {
    char c;
    float f;
    double d;
};

int main(void) {

    struct rectangle r1;
    r1.length = 10;
    //r1.breadth = 10;
    struct better b;
    struct worse w;
    printf("%lu\n", sizeof(struct better));
    printf("%lu\n", sizeof(struct worse));
    //printf("Area = %f", r1.length * r1.breadth);
    return 0;
}
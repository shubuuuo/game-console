#include <stdio.h>

int main()
{

    int i = 32;
    int *a = &i; // a = 87994
    a++;         // address of i or value of a = 87998
    char c = 'A';
    char *b = &c; // a= 87994
    b++;          // now a = 87995
    float j = 1.7;
    float *d = &j;
    d++;            // now a = 87994
    float k = 1.7;
    float *f = &k;
    f++;            // now a = 87994

    printf("The address of %d is %d\n", a, &i);
    printf("The address of %d is %d\n", b, &c);
    printf("The address of %d is %d", d, &j);

    return 0;
}
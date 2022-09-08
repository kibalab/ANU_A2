#include <stdio.h>
int main()
{
    float a, b;

    scanf("%f %f", &a, &b);

    printf("\nsum : %.2f", a + b);
    printf("\nav : %.2f", (a + b) / 2.0);
    return 0;
}

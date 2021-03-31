#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int r;
    double result;

    scanf("%d", &r);

    result = M_PI * (double)r * (double)r;
    printf("%f\n", result);

    result =  2 * r * r;
    printf("%f", result);

    return 0;
}

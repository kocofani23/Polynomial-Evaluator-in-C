#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double exp, *coefficients, x;
    int i;
    double temp, result;
    printf("Enter power of equation: ");
    scanf("%lf", &exp);

    coefficients = (double*)calloc(exp + 1, sizeof(double));

    printf("Enter coefficients of equation: ");
    for(i=0; i<=exp; i++){
        scanf("%lf", &coefficients[i]);
    }

    printf("Enter value of x for the equation to be evaluated: ");
    scanf("%lf", &x);

    temp = exp;
    printf("Equation: ");
    for(i=0; i<=exp; i++){
        printf("%.2lf * x^%.2lf + ", coefficients[i], temp);
        temp--;
    }

    result = 0.0;

    temp = exp;
    for(i=0; i<=exp; i++){
        result += coefficients[i] * (pow(x, temp));
        temp--;
    }

    printf("\nResult of equation = %.2lf\n", result);

    free(coefficients);

    return 0;
}

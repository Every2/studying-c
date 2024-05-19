#include <stdio.h>

float f_to_c(float fahr)
{
    return (5.0/9.0) * (fahr-32.0);
}

int main() {
    float fahr;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("fahrenheit celsius\n");
    while (fahr <= upper) {
        printf("%3.0f %14.1f\n", fahr, f_to_c(fahr));
        fahr = fahr + step;
    }

    return 0;
}
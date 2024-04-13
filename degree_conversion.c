#include <stdio.h>

/* print Farenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main() {
    char deg=248;
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size*/

    fahr = lower;
    printf("  F\t   C\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f%c\t%6.2f%c\n", fahr, deg, celsius, deg);
        fahr = fahr + step;
    }
}
#include <stdio.h>
#include <math.h>
int main() {
    int year = 2020;
    double population = 6.0 * exp(0.02 * (year - 2000));
    printf("Estimated Population in %d: %.2f billion\n", year, population);
    return 0;
}
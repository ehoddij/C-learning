#include <stdio.h>
#define PI 3.14159265358979323846
int main() {
    double d1 = 1.5, d2 = 1.3, d3 = 1.2, d4 = 4.0;
    double total_length = PI * (d1 + d2 + d3 + d4);
    printf("Total steel pipe length: %.4fm\n", total_length);
    return 0;
}
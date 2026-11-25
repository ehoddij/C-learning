#include <stdio.h>
#include <math.h>
int main() {
    double x1 = 3, y1 = 9, x2 = 7, y2 = 12;
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("Distance: %.2f\n", d);
    return 0;
}
#include <stdio.h>
int main() {
    float fahrenheit = 75.0;
    float celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Celsius: %.2f\n", celsius);
    return 0;
}
/*已知条件：华氏温度 Fahrenheit=75 。
转换公式： Celsius= 
9
5.0
​
 (Fahrenheit−32) 。
计算过程：
Celsius= 
9
5.0
​
 ×(75−32)= 
9
5.0
​
 ×43≈23.89*/
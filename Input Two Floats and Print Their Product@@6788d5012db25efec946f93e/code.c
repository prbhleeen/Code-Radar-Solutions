#include <stdio.h>

int main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    float product = num1 * num2;
    printf("%.2f", product);
    return 0;
}
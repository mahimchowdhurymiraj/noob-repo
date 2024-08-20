#include <stdio.h>

int main(){
    int a, b, c, sum;
    float avg;

    printf("Enter three integer values: ");
    scanf("%d%d%d", &a, &b, &c);

    sum = a + b + c;
    avg = (float)sum / 3;

    printf("\nThe summation of three numbers is = %d", sum);
    printf("\nThe average of three numbers is = %.2f", avg);

    return 0;
}
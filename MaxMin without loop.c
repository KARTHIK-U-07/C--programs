#include <stdio.h>
int main() {
    int a, b;
    int max, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a + b + abs(a - b)) / 2;
    min = (a + b - abs(a - b)) / 2;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}

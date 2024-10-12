#include <stdio.h>

int main()
{
    printf("Hello! Im the calculator!\n");


    int int_a, int_b, int_c1, int_c2, int_c3, int_c4, int_c5;
    printf("First number: ");
    scanf("%d", &int_a);

    printf("Second number: ");
    scanf("%d", &int_b);

    int_c1 = int_a + int_b;
    int_c2 = int_a - int_b;
    int_c3 = int_a * int_b;
    int_c4 = int_a / int_b;
    int_c5 = int_a % int_b;

    printf("%d + %d = %d\n", int_a, int_b, int_c1);
    printf("%d - %d = %d\n", int_a, int_b, int_c2);
    printf("%d * %d = %d\n", int_a, int_b, int_c3);
    printf("%d / %d = %d\n", int_a, int_b, int_c4);
    printf("%d / %d = %d\n", int_a, int_b, int_c5);

    return 0;
}

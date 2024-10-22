#include <stdio.h>
int main() {


	int int_a, int_b, int_c, int_v, int_s;

	printf("Enter the length: ");
	scanf("%d", &int_a);
	printf("Enter the width: ");
	scanf("%d", &int_b);
	printf("Enter the height: ");
	scanf("%d", &int_c);





	int_s = ((int_a * int_b) + (int_b * int_c) + (int_a * int_c)) * 2;
	int_v = int_a * int_b * int_c;


	printf("S = %d\n", int_s);
	printf("V = %d\n", int_v);





	return 0;









}

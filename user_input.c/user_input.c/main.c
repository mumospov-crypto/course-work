#include <stdio.h>

int main() {
	float height;
	double balance;
	int phone_number;

	printf("Enter your height in meters;");
	scanf_s("%f", &height);
	printf("Enter your balance in ksh;");
	scanf_s("%lf", &balance);
	printf("Enter your phone number;");
	scanf_s("%d", &phone_number);

	printf("Your height is: %.2f meters\n", height);
	printf("Your balance is: %.2f ksh\n", balance);
	printf("Your phone number is: %d\n", phone_number);

	return 0;
}
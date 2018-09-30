#include <stdio.h>
void transf(float height)
{
	float inch;

	inch = 2.54*height;
	printf("Your height in centimeter is %.2f, in inch is %.2f.\n", height, inch);

}
int main(void)
{
	float height;

	printf("Please enter your height in centimeter:  ");
	scanf_s("%f", &height);
	transf(height);
	return 0;
}

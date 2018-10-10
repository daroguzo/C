#include <stdio.h>
int main() {
	int array1[5];
	int i, max=0, min=100;
	double aver=0;

	printf("enter 5 weight? ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &array1[i]);
		if (array1[i] >= max)
			max = array1[i];
		if (array1[i] <= min)
			min = array1[i];
		aver += array1[i];
	}
	printf("maximum = %d\tminimum = %d\t average: %0.1lf\n", max, min, aver / 5);
	return 0;
}
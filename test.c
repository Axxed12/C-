#include <stdio.h>
//double Max(double a, double b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	double a;
//	double b;
//	scanf_s("%lf %lf", &a, &b);
//	double m = Max(a, b);
//	printf("%f", m);
//	return 0;
//
//}

int main()
{
	int age = 0;
	printf("����������:\n");
	scanf_s("%d", &age);
	if (age >= 40 && age <= 70)
		printf("����\n");
	else if (age < 24 && age >= 12)
		printf("����\n");
	else if (age > 70)
		printf("����\n");
	else
		printf("��ͯ\n");
	
	return 0;
}
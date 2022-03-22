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
	printf("请输入年龄:\n");
	scanf_s("%d", &age);
	if (age >= 40 && age <= 70)
		printf("中年\n");
	else if (age < 24 && age >= 12)
		printf("青年\n");
	else if (age > 70)
		printf("老年\n");
	else
		printf("儿童\n");
	
	return 0;
}
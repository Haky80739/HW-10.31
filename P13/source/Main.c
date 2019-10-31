#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main(void)
{
	int k; double Ans;
	printf("ŒvZ3.5“IkŸ•û?¿—A“ük=");
	scanf_s("%d",&k); Ans = Power(3.5,k);
	printf("3.5“I%dŸ•û=%f\n", k, Ans);

	system("pause");
	return 0;
}
 
double Power(double X, int n)
{
	int i; double PowerXn = 1;
	for (i = 1; i <= n; i++)
		PowerXn = PowerXn * X;
	return PowerXn;
}
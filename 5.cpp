#include<stdio.h>

#include<stdlib.h>

int main(void)

{

	int a, b, c, x,y,z,n;

	printf("�п�J�U�O����:");

	scanf("%d %d", &a,&x);

	printf("�п�J�U�O����:");

	scanf("%d %d", &b,&y);

	printf("�п�J�U�O����:");

	scanf("%d %d", &c,&z);

	if (a > x)

	{

		n = (a - x) * 3600 + (b - y) * 60 + (c - z);

			printf("�ۮt%d��", n);



	}

	else if (x > a)

	{

		n = (x - a) * 3600 + (b - y) * 60 + (c - z);

			printf("�ۮt%d��", n);



	}

	else

		printf("��J���~");



	system("pause");

	return 0;

}

#include <stdio.h>
int main()
{
	int ar[100],i,sum=0;
	float avg=0;
	puts("enter 10 numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=ar[i];
	}
	avg=(float)sum/10;
	printf("sum of array is :%d and avrage is :%f\n",sum,avg);
	return 0;
}

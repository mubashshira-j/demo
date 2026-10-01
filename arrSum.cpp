//WAP to calculate sum of array element ?
#include<stdio.h>
main()
{
	int arr[10],i,sum=0;
	float avg;
	printf("Entrt the ten number = \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		
	}
	avg=float(sum)/10;
	printf(" Total amount=%d \n",sum);
	printf("avg=%.2f",avg);
}

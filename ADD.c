#include<stdio.h>

int main()
{
	int i,sum,childId1,childId2,j,k,n;
	childId1=fork();
	childId2=fork();
	if(childId1==0)
	{
		for (i=0;i<25;i++)
		{
			sum=sum+i;
		}
	}
	if(childId1>0)
	{

		for(k=25;k<50;k++)
		{
			sum=sum+k;
		}
	}
	if(childId2>1)
	{
		for( j=51;j<75;j++)
		{
			sum=sum+j;
		}
	}
	if (childId2==0)
	{
		for(n=76;n<100;n++)
		{
			sum=sum+n;
		}
	}
	printf("sum  %d \n",sum);
//	printf("\n %d",childId);
	printf("\n");

}

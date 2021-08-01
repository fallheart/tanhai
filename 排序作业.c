#include<stdio.h>

int main()
{
	int i,j;
	int a[3];
	int A,B;
	printf("为数组元素赋值:\n");
	for(i=0;i<3;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	/*从小到大排序*/
	for(i=0;i<2;i++)
	{
		A=a[i];
		B=i;
		for(j=i+1;j<3;j++)
		{
			if(a[j]<A)
			{
				A=a[j];   
				B=j;
			}
		}
		/*交换两个元素值*/
		a[B]=a[i];
		a[i]=A;
	}

	/*输出数组*/
	for(i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
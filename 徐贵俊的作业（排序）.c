#include<stdio.h>

int main()
{
	int i,j;
	int a[3];
	int A,B;
	printf("Ϊ����Ԫ�ظ�ֵ:\n");
	for(i=0;i<3;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	/*��С��������*/
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
		/*��������Ԫ��ֵ*/
		a[B]=a[i];
		a[i]=A;
	}

	/*�������*/
	for(i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
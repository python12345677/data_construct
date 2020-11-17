#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *p,int n);
int tmp=0;
int main()
{
	printf("hello wr\n");
	int a[10];
	int tmp=0;
	srand(66);
	for(int i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%d ",a[i]);
	}
	bubble_sort(a,10);
	printf("\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

int bubble_sort(int *p,int n)
{
	for(int j=n;j>=2;j--)
	{
		for(int i=0;i<j-1;i++)
		{
			if(p[i]>p[i+1])
			{
				tmp=p[i];p[i]=p[i+1];p[i+1]=tmp;
			}
		}
	}
	return 0;
}

int choose_sort(int *p,int n)
{
	int tmp=0;
}


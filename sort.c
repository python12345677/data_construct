#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *p,int n);
int choose_sort(int *p,int n);
int insert_sort(int *p,int n);
int tmp=0;
int main()
{
	printf("hello wr\n");
	int a[10];
	int tmp=0;
	srand(55);
	for(int i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%d ",a[i]);
	}
	choose_sort(a,10);
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
	int tmp=0,min_index=0;
	for(int j=0;j<n-1;j++)
	{
		min_index=j;
		for(int i=j+1;i<n;i++)
		{
			if(p[i]<p[min_index])
			{
				min_index=i;
			}
		}
		tmp=p[j];p[j]=p[min_index];p[min_index]=tmp;
	}
	return 0;
}

int insert_sort(int *p,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int current=p[i+1];
		for(int j=i;j>=0 ;j--)
		{
			if(p[j]>current)
			{
				p[j+1]=p[j];
			}
			else
			{
				p[j+1]=current;
				break;
			}
			if(j==0)
			{
				p[j]=current;
			}
		}
	}
}


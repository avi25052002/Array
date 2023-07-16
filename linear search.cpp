#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num;
	int i;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number to search");
	scanf("%d",&num);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			printf("elemlent exists");
		}
	}

}

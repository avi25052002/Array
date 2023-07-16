#include<stdio.h>
#include<conio.h>
int main()
{	int n ,value;
	printf("enter the size of an array:\t ");
	scanf("%d",&n);
		printf("enter thevalue to remove: \t");
	scanf("%d",&value);
	int arr[n],i;

	printf("enter the elements of array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d \n",&arr[i]);
	}


	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]!=value)
		{
			printf("%d \t ",arr[i]);
		}
	}
}

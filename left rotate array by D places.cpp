#include<stdio.h>
#include<conio.h>
int main()
{
	int d;
	int i;
	int n;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
 	d=d%n;
 	int arr[n];
 	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
 	printf("enter the d value:\n");
	scanf("%d",&d);
 	int temp[d];
 	for(i=0;i<d;i++)
 	{
 		temp[i]=arr[i];
	 }
	 for(i=d;i<n;i++)
	 {
	 	arr[i-d]=arr[i];
	 }
	 for(i=n-d;i<n;i++)
	 {
	 	arr[i]=temp[i-(n-d)];
	 }
	 		printf("------------\n");

	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
}

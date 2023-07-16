
#include <stdio.h>
int main()
{
	int arr1size = 5, arr2size = 5, arr_resultsize, i, j;


	int a[5] = { 11, 27, 53, 44, 59 };


	int b[5] = { 63, 37, 82, 45, 10 };


	arr_resultsize = arr1size + arr2size;
	int c[arr_resultsize];


	for (i = 0; i < arr1size; i++) {
		c[i] = a[i];
	}
 
	for (i = 0;i < arr2size; i++) {
		for(j=0 ; j<arr_resultsize ; j++)
		{
		c[j] = b[i];
	}
}
	for (i = 0; i < arr_resultsize; i++) {
		printf("%d ", c[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[5];
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);

	}
	int h = 0;
	for(h = 4; h>=0 ;h--)
	{
	   printf("%d  ", arr[h]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[15],i,n,j,min,temp;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the %d elements :\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[min])
				min=j;
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("The sorted array is : \n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
		
}

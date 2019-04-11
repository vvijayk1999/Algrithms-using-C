#include<stdio.h>
int main()
{
	int a[20],i,n,key,low,high,mid;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the key element : ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<high)
	{
		mid=(high+low)/2;
		if(a[mid]==key)
		{
			printf("Element %d found at position %d.",key,mid+1);
			return 0;
		}
		else
		if(key<mid)
			high=mid-1;
		else
			low=mid+1;
		
	}
	printf("Element %d not found !",key);
}

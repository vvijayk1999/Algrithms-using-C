
#include<stdio.h>
void quicksort(int a[10],int low,int high)
{
	int s;
	if(low<high)
	{
		s=partition(a,low,high);
		quicksort(a,low,s-1);
		quicksort(a,s+1,high);
	}
	return;
}
int partition(int a[10],int low,int high)
{
	int i,j,temp,pivot;
	i=low;
	j=high+1;
	pivot=a[low];
	while(i<=j)
	{
		do
			i++;
		while((pivot>a[i])&&(i<=high));
		do
			j--;
		while(pivot<a[j]);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

void main()
{
	int a[100],i,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the %d element:\n",n);
	for(i=0;i<n;i++) 
	{
	
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("The sorted elements are : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

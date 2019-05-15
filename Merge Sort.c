#include<stdio.h>
void mergeSort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,c[50];
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(i<=mid)
		c[k++]=a[i++];
	while(j<=high)
		c[k++]=a[j++];
	for(i=0;i<=high;i++)
		a[i]=c[i];
}
int main()
{
	int i,n,a[50];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the %d elements :\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergeSort(a,0,n-1);
	printf("The sorted array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return;
}

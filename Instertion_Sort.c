#include<stdio.h>
int main()
{
	int a[10],i,n,temp,j;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("Enter elements in sorted order \n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

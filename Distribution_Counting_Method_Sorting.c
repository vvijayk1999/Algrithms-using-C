#include<stdio.h>
int main()
{
	int a[10],s[10],i,j,u=0,L=999,n,d[10]={0};
	printf("Enter the number of eLements : ");
	scanf("%d",&n);
	printf("Enter the eLements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>u)
			u=a[i];
		if(a[i]<L)
			L=a[i];
	}
	for(i=0;i<n;i++)
	{
		d[a[i]-L]=d[a[i]-L]+1;
	}
	for(i=1;i<=(u-L);i++)
	{
		d[i]=d[i]+d[i-1];
	}
	for(i=(n-1);i>=0;i--)
	{
		j=a[i]-L;
		s[d[j]-1]=a[i];
		d[j]--;
	}
	printf("The eLements in sorted order are :\n");
	for(i=0;i<n;i++)
		printf("%d ",s[i]);
}

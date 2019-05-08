#include<stdio.h>
#define MAX 50
int s[MAX],x[MAX],d;
void sumOfSubsets(int p,int k,int r)
{
	int i;
	x[k]=1;
	if(p+s[k]==d)
	{
		for(i=0;i<=k;i++)
			if(x[i]==1)
				printf("%d\t",s[i]);
		printf("\n");
	}
	else if(p+s[k]+s[k+1]<=d)
		sumOfSubsets(p+s[k],k+1,r-s[k]);
	if((p+r-s[k]>=d)&&(p+s[k+1]<=d))
	{
		x[k]=0;
		sumOfSubsets(p,k+1,r-s[k]);
	}
}
int main()
{
	int i,n,sum=0;
	printf("Enter the number of integers in the set : ");
	scanf("%d",&n);
	printf("Enter the values into the set in increasing order\n");
	for(i=1;i<=n;i++)
		scanf("%d",&s[i]);
	printf("Enter d value : ");
	scanf("%d",&d);
	for(i=1;i<=n;i++)
		sum=sum+s[i];
	if(sum<d||s[i]>d)
		printf("No subset possible\n");
	else
		sumOfSubsets(0,1,sum);
}

#include<stdio.h>
int knapsack(int [10],int [10],int,int);
int max(int,int);
int main()
{
	int w[10],p[10],c,n,net,i;
	printf("Enter the capacity of knapsack : ");
	scanf("%d",&c);
	printf("Enter the number of objects : ");
	scanf("%d",&n);
	printf("Enter the weight array :");
	for(i=0;i<n;i++)
		scanf("%d",&w[i]);
	printf("Enter the profit array :");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	net=knapsack(w,p,n,c);
	printf("The total profit is %d ",net);
	return;
}
int knapsack(int w[10],int v[10],int n,int c)
{
	int P[n+1][c+1],i,m;
	for(i=0;i<=n;i++)
	{
		for(m=0;m<=c;m++)
		{
			if(i==0||m==0)
				P[i][m]=0;
			else if(w[i-1]<=m)
				P[i][m]=max(P[i-1][m],P[i-1][m-w[i-1]]+v[i-1]);
			else
				P[i][m]=P[i-1][m];
		}
	}
	return P[n][c];
}
int max(int x,int y)
{
	if(x>y)
		return x;
	else return y;
}

#include<stdio.h>
void main()
{
	int d[10][10],n,i,j;
	printf("Enter the number of vertices : ");
	scanf("%d",&n);
	printf("Enter the adjacent matrix : \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&d[i][j]);
	floyd(d,n);
	printf("All pair shortest path matrix is :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",d[i][j]);
		printf("\n");
	}
	return;
}
int floyd(int d[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
					d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int min(int y,int x)
{
	if(y<x)
		return y;
	else
		return x;
}

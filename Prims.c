#include<stdio.h>
void main()
{
	int n,cost[10][10],i,j,source,mc;
	printf("Enter the no of vertices : ");
	scanf("%d",&n);
	printf("Enter the cost matrix : \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);
	printf("Enter the source vertex : ");
	scanf("%d",&source);
	mc=prims(n,cost,source);
	printf("The cost of MST = %d\n",mc);
	return;
	
}
int prims(int n,int cost[10][10], int source)
{
	int i,j,min,u,d[10],visited[10],vertex[10],sum=0;
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		vertex[i]=source;
		d[i]=cost[source][i];
	}
	visited[source]=1;
	for(i=1;i<n;i++)
	{
		min=999;
		for(j=1;j<=n;j++)
		{
			if(visited[j]==0&&d[j]<min)
			{
				min=d[j];
				u=j;
			}
		}
		visited[u]=1;
		printf("The edge (%d -> %d)=%d\n",vertex[u],u,min);
		sum+=d[u];
		for(j=1;j<=n;j++)
		{
			if(visited[j]==0&&cost[u][j]<d[j])
			{
				d[j]=cost[u][j];
				vertex[j]=u;
			}
		}
	}
	return sum;
	
}

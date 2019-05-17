#include<stdio.h>
void dijkstras(int n,int cost[10][10],int source,int d[10]);
void main()
{
	int n,cost[10][10],i,j,source,d[10];
	printf("Enter the number of vertices : ");
	scanf("%d",&n);
	printf("Enter the cost matrix : \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);
	printf("Enter the source vertex : ");
	scanf("%d",&source);
	dijkstras(n,cost,source,d);
	for(i=1;i<=n;i++)
			printf("%d --> %d = %d\n",source,i,d[i]);
}
void dijkstras(int n,int cost[10][10],int source,int d[10])
{
	int i,j,min,u,v,visited[10];
	for(i=1;i<n;i++)
	{
		d[i]=cost[source][i];
		visited[i]=0;
	}
	visited[source]=1;
	for(i=1;i<n-1;i++)
	{
		min=999;
		for(j=1;j<n;j++)
			if(visited[j]==0&&d[j]<min)
			{
				min=d[j];
				u=j;
			}
		visited[u]=1;
		for(v=1;v<=n;v++)
			if(visited[v]==0&&d[u]+cost[u][v]<d[v])
				d[v]=cost[u][v]+d[u];
	}
}

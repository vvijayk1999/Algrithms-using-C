#include<stdio.h>
void main()
{
	int n,cost[10][10],i,j;
	int a,b,u,v,ne=1,min,sum=0,parent[10];
	printf("Enter the no of vertices : ");
	scanf("%d",&n);
	printf("Enter the cost matrix : \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	for(i=1;i<=n;i++)
		parent[i]=0;
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		while(parent[u])
			u=parent[u];
		while(parent[v])
			v=parent[v];
		if(u!=v)
		{
			printf("The edge(%d -> %d) = %d\n",u,v,min);
			ne++;
			sum=sum+min;
			parent[v]=u;
		}
		cost[a][b]=cost[b][a]=999;
	}	
	printf("The cost of minimum spanning tree is %d\n",sum);
}

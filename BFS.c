#include<stdio.h>
int visited[10];
int bfs(int,int a[10][10],int source);
int main()
{
	int a[10][10],i,j,n,source;
	printf("Enter no of verticies:\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter Source vertex : ");
	scanf("%d",&source);
	bfs(n,a,source);
}
int bfs(int n,int a[10][10],int source)
{
	int q[10],f=1,r=1,i,u;
	visited[source]=1;
	q[r]=source;
	while(f<=r)
	{
		u=q[f++];
		for(i=1;i<=n;i++)
		if(a[u][i]==1&&visited[i]==0)
		{
			visited[i]=1;
			q[++r]=i;
		}
	}
	for(i=1;i<=n;i++)
	if(visited[i])
		printf("The node %d is reachable\n",i);
	else	
		printf("The node %d is not reachable\n",i);
}

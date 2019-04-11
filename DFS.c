#include<stdio.h>
int count,visited[10];
int dfs(int,int a[10][10],int source);
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
	dfs(n,a,source);
	if(count==n)
		printf("the Graph is connected :\n");
	else
		printf("The Graph is not connected :\n");
}
int dfs(int n,int a[10][10],int source)
{
	int i;
	visited[source]=1;
	count++;
	for(i=1;i<=n;i++)
	{
		if(a[source][i]==1&&visited[i]==0)
			dfs(n,a,i);
	}
}

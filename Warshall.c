#include<stdio.h>
void main()
{
	int adj[10][10],n,i,j;
	printf("Enter the number of vertices : ");
	scanf("%d",&n);
	printf("Enter the adjacent matrix : \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&adj[i][j]);
	warshall(adj,n);
	printf("The transitive closure matrix is :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d",adj[i][j]);
		printf("\n");
	}
	return;
}
int warshall(int a[10][10],int n)
{
	int i,j,k;
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(a[i][k]==1&&a[k][j]==1)
					a[i][j]=1;
}

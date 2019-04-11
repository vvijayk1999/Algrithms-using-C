#include<stdio.h>
void topo(int,int a[10][10],int indegree[10]);
int k=0,temp[10];
void main()
{
	int a[10][10],i,j,indegree[10]={0},n;
	printf("Enter the number of vertices : ");
	scanf("%d",&n);
	printf("Enter the adjacency matrix :\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
				indegree[j]++;
		}	
	topo(n,a,indegree);
	if(k!=n)
		printf("Topological ordering is not possible !\n");
	else
	{
		printf("Topological ordering :\n");
		for(i=1;i<=n;i++)
			printf("%d\t",temp[i]);
	}
}
void topo(int n,int a[10][10],int indegree[10])
{
	int i,j=0;
	for(i=1;i<=n;i++)
	{
		if(indegree[i]==0)
		{
			indegree[i]=-1;
			temp[++k]=i;
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==1&&indegree[j]!=-1)
					indegree[j]--;
			}
			i=0;
		}
	}
}

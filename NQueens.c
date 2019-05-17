#include<stdio.h>
#include<math.h>
#define MAX 50
int canplace(int c[],int r)
{
	int i;
	for(i=0;i<r;i++)
	{
		if((c[i]==c[r])||(abs(c[i]-c[r]))==abs(i-r))
			return 0;
	}
	return 1;
}
void display(int c[],int n)
{
	char cb[10][10];
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cb[i][j]='*';
	for(i=0;i<n;i++)
		cb[i][c[i]]='Q';
	printf("The output\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%c ",cb[i][j]);
		printf("\n");
	}
}
int nqueens(int n)
{
	int r,c[MAX];
	r=0;
	c[r]=-1;
	while(r>=0)
	{
		c[r]++;
		while(c[r]<n&&!canplace(c,r))
			c[r]++;
		if(c[r]<n)
		{
			if(r==n-1)
			{
				display(c,n);
				printf("\n");
			}
			else
			{
				r++;
				c[r]=-1;
			}
		}
		else
		{
			r--;
		}
	}
}
int main()
{
	int n;
	printf("Enter the number of queens \n");
	scanf("%d",&n);
	nqueens(n);
	return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
	char t[50],p[50];
	int n,m,i,j;
	printf("Enter the text string : ");
	gets(t);
	n=strlen(t);
	printf("Enter the patern string : ");
	m=strlen(p);
	gets(p);
	for(i=0;i<=n-m;i++)
	{
		j=0;
		while(j<m&&p[j]==t[i+j])
			j++;
		if(j==m)
		{
			printf("The patern is found at %d position.",i+1);
			return 0;
		}
	}
	printf("Patern not found !");
	return -1;
}

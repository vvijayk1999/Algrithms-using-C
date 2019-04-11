#include<stdio.h>
#include<string.h>
#define MAX 500
int t[MAX],m,n;
void main()
{
	char p[100],text[100];
	int pos;
	printf("Enter the text string :\n");
	gets(text);
	printf("Enter the pattern string :\n");
	gets(p);
	n=strlen(text);
	m=strlen(p);
	shifttable(p);
	pos=Horsepool(text,p);
	if(pos>=0)
		printf("Pattern ism found at %d \n",pos+1);
	else
		printf("Pattern is not found \n");
}
void shifttable(char p[])
{
	int i;
	m=strlen(p);
	for(i=0;i<MAX;i++)
		t[i]=m;
	for(i=0;i<m;i++)
		t[p[i]]=m-1-i;
}
int Horsepool(char text[],char p[])
{
	int i,k;
	i=m-1;
	while(i<=n-1)
	{
		k=0;
		while((k<=m-1)&&(p[m-1-k]==text[i-k]))
			k++;
		if(k==m)
			return i-m+1;
		else
			i=i+t[text[i]];	
	}
	return -1;
}

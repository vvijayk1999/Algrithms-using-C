#include<stdio.h>
int main()
{
	int a[10],c_id,n,i;
	printf("Enter the number of employees :");
	scanf("%d",&n);
	printf("Enter the emp ID of %d employees :",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the employee ID to be searched :");
	scanf("%d",&c_id);
	for(i=0;i<n;i++)
		if(c_id==a[i])
		{
			printf("ID %d found at position %d .",c_id,i+1);
			return 0;
		}
	printf("Search Unsuccesful,ID not found!");
	return -1;
}

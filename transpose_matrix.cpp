#include<stdio.h>
#include<conio.h>
void transpose();
void show();
int arr[100][100];
int tran[100][100];
int i,j,n,m;
int main()
{
	printf("enter no. of row & column: ");
	scanf("%d %d",&n,&m);
	printf("enter your data: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	show();
}
void show()
{
	printf("\nyour matrix after transpose is: \n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}

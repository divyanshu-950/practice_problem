#include<stdio.h>
#include<conio.h>
void show(int [100][100]);
void insert(int [100][100]);
int arr1[100][100];
int i,j,n,m;
int main()
{
 insert(arr1);
 	printf("\nEnter matrix for boundary traversal: \n");
 show(arr1);
 
 
}
void insert(int arr[100][100])
{
	printf("enter no. of row & column: ");
	scanf("%d %d",&n,&m);
	printf("\nenter your data: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}


void show(int arr[100][100])
{

		for(i=0;i<n;i++)
	{
		printf("\t");
		for(j=0;j<m;j++)
		{
			if(i==0||i==n-1)
			printf("%d ",arr[i][j]);
			else{
				if(j==0||j==m-1)
				printf("%d ",arr[i][j]);
				else
				printf("   ");
			}
		}
		printf("\n");
	}
		printf("\n");
} 


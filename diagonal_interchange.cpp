#include<stdio.h>
#include<conio.h>
void dig();
void show(int [100][100]);
void insert(int [100][100]);
int arr1[100][100];
int arr2[100][100];
int add[100][100];
int i,j,n,m;
int main()
{
 insert(arr1);
 	printf("\nyour first matrix is: \n");
 show(arr1);
 insert(arr2);
 	printf("\nyour second matrix is: \n");
 show(arr2);
 dig();
 	printf("\nyour matrix after diagonal interchange is: \n");
 show(arr1);
 show(arr2);
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
void dig()
{
	int chan;
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j || i+j==m-1)
	       {
	       	chan=arr1[i][j];
	       	arr1[i][j]=arr2[i][j];
	       	arr2[i][j]=chan;
		   }
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
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
		printf("\n");
}

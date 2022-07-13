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
	printf("your matrix is: -\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",
			arr[i][j]);
		}
		printf("\n");
	}
}


void show(int arr[100][100])
{
	int left=0,top=0,bottom=n-1,right=m-1;
	while(left<=right && top<=bottom)
	{
		for(i=left;i<=right;i++){
		printf("%d->",arr[top][i]);	
	}
	top++;
	
	    for(i=top;i<=bottom;i++){
		printf("%d->",arr[i][right]);
    }  
    right--;
     
     if(top<=bottom)
     {
     	for(i=right;i>=left;i--)
     	{
     		printf("%d->",arr[bottom][i]);
		 }
		 bottom--;
		 
	 }
	 if(left<=right)
     {
     	for(i=bottom;i>=top;i--)
     	{
     		printf("%d->",arr[i][left]);
		 }
		 left++;
	 }
}
}




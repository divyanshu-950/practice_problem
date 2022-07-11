#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int arr[100],i,j;
	int n,k,l,temp,x=0;
	char ch;
	printf("\tWelcome to Array Rotatation Menu\n");
	printf("\nEnter the Size of an Array: ");
	scanf("%d",&n);
	printf("\nEnter Array: - \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	fflush(stdin);
	system("cls");
	do{
	printf("\t Welcome to Array Rotatation Menu\n\n");
	printf("\t1> To Rotate right\n\t");
	printf("2> To Rotate Left\n\t");
	printf("Enter Your Choice: \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("your Original Array is: \n");
			for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter Position to Rotate: ");
	scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			for(j=0;j<n-1;j++)
			{
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
			printf("your Array After roatation is: \n");
			for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	}
	else if(l==2)
	{
			printf("your Original Array is: \n");
			for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter Position to Rotate: ");
	scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			for(j=n-1;j>0;j--)
			{
				x=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=x;
			}
		}
			printf("your Array After roatation is: \n");
			for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
   fflush(stdin);
	printf("\n\tEnter Y to Try Again\n\t");
	scanf("%c",&ch);
	system("cls");
	}
	while(ch=='y'||ch=='Y');
	
}

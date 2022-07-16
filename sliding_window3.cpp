#include<stdio.h>
#include<stdlib.h>
void sliding(int [],int ,int);
int main()
{
    int arr[50];
    int m,i,k;
    printf("Enter Term of Array: ");
    scanf("%d",&m);
    printf("\nEnter Data: \n");
      for(i=0;i<m;i++)
      {
      	scanf("%d",&arr[i]);
	  }
	  printf("\nEnter Window size: ");
	  scanf("%d",&k);
	  sliding(arr,k,m);
    return 0;
}
void sliding(int arr[],int k,int n)
{
	int i=0,j=0,sum=0,max=0;
	while(j<=n)
	{
			sum+=arr[j];
		if(j-i+1<k)
		{
			j++;
		}
		 else if(j-i+1==k)
		 {
		 	if(sum>max)
		 	max=sum;
		 	sum=sum-arr[i];
		 	i++;
		 	j++;
		 }
	}
	printf("Max Sum is: %d",max);
}

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
	int list[n];
	int i=0,j=0,sum=0,l=-1,p=0;
	while(j<=n)
	{
		if(arr[j]<0)
		{
			 l++;
			 list[l]=arr[j];
		}
		 
		if(j-i+1<k)
		{
			j++;
		}
		 else if(j-i+1==k)
		 {
		 	if(p>l||l<0)
		 	printf("\nNegative Number of Window Size %d is: 0\n\n",k);
		 	else{
		 		printf("Negative Number of Window Size %d is: %d\n\n",k,list[p]);
		 		if(arr[i]==list[p])
		 		p++;
			 }
		 	sum=sum-arr[i];
		 	i++;
		 	j++;
		 }
	}

}

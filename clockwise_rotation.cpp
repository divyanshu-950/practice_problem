#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50][50];
    int i,j,n,m;
     printf("enter no. of row & column: ");
	scanf("%d %d",&n,&m);
	printf("\nenter your data: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("Original Array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nRotate Matrix by 90 degrees\n");
    for(i=0;i<3;i++)
    {
        for(j=2;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

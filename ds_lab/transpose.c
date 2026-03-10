#include <stdio.h>
int main()
{
	int ar[100][100],br[100][100],i,j,m,n;
	puts("enter the order of the array : ");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("\nentered matric\n");
	for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf("%d\t",ar[i][j]);
                }
		printf("\n");
        }
	for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        br[j][i]=ar[i][j];
                }
        }
	printf("transpose matric\n");
	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",br[i][j]);
                }
                printf("\n");
        }
	return 0;
}

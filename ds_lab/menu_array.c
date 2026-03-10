#include <stdio.h>
#include <string.h>
void deletion(int num, int *ptr){
	int pos, i;
        printf("enter the position to be deleted: ");
        scanf("%d",&pos);
        pos--;
        for(i=pos;i<num;i++){
                *(ptr+i)=*(ptr+i+1);
        }
        printf("new array is :\n");
        for(i=0;i<num;i++)
        {
                printf("%d\n",*(ptr+i));
        }

}
void insert(int num, int *ptr){
	int number, pos,i;
	printf("enter the number to be inserted : ");
        scanf("%d",&number);
        printf("enter the position to be inserted : ");
        scanf("%d",&pos);
	pos--;
        for(i=num;i>pos;i--){
                *(ptr+i)=*(ptr+i-1);
        }
        *(ptr+pos)=number;
        printf("new array is :\n");
        for(i=0;i<=num;i++)
        {
	        printf("%d\n",*(ptr+i));
        }
}
void traversal(int num, int *ptr){
	int i;
	printf("\n");
	for(i=0;i<num;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\n");
}
void merge(int num_ar,int num_br,int *ptr_ar, int *ptr_br){
	int i,j;
	for(j=num_ar;j<(num_ar+num_br);j++)
	{
		*(ptr_ar+j)=*(ptr_br+j-num_ar);
	}
	for(i=0;i<(num_ar+num_br);i++)
	{
		printf("\n%d",*(ptr_ar+i));
	}
	printf("\n");
}
int main()
{
	int ar[100],br[100],cr[100],i,j,n,op,num,r;
	printf("enter number of a number : ");
	scanf("%d",&n);
	printf("enter the numbers\n ");
	for(i =0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("entred array is\n");
	for(j=0;j<n;j++)
	{
		printf("\t%d",ar[j]);
	}
	do{
		printf("\nenter the menu 1:insertion 2:deletion 3:traversal 4:mergeing\n ");
		scanf("%d",&op);

		switch(op)
		{
			case 1:
  			      	insert(n,ar);
				break;
			case 2:
				deletion(n,ar);
				break;
			case 3:
				traversal(n,ar);
				break;
			case 4:
				printf("\nEnter the number of nember in new array :");
		        	scanf("%d",&r);
		        	printf("enter the elements of new array :\n");
      		  		for(int y=0;y<r;y++)
       				{
                			scanf("%d",&br[y]);
        			}
				merge(n,r,ar,br);
				break;
		}
		printf("\npress 1 to continue\n");
		scanf("%d",&r);
	}
	while(r == 1);
	return 0;
}

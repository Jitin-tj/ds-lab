#include <stdio.h>
int main(){
	int ar[100],n,num,temp;
	printf("enter the number of elementsin array ");
	scanf("%d",&n);
	printf("enter the elements :");
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	temp=ar[0];
	for(int i=0;i<n;i++){
		if(ar[i]>temp)
		{
			temp=ar[i];
		}
	}
	printf("largest is %d\n",temp);
	return 0;
}

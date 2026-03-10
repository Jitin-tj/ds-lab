#include <stdio.h>
void insertion_sort(int *ptr,int n){
	int i, j ,temp;
	for(i=1;i<n;i++){
		temp = *(ptr+i);
		j=i-1;
		while(j>=0 && *(ptr+j)>temp){
			*(ptr+j+1)=*(ptr+j);
			j=j-1;
		}
		*(ptr+j+1) = temp;
	}
	printf("the sorted array is  \n");
	for(i=0;i<n;i++){
		printf("%d\n", *(ptr+i));
	}
}
int main(){
	int ar[100],n;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	insertion_sort(ar,n);
	return 0;
}

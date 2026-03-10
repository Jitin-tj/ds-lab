#include <stdio.h>
int linearSer(int *ptr,int size,int value){
	for(int i=0;i<size;i++){
		if(*(ptr+i) == value){
			return i;
		}
	}
	return -1;
}
int main(){
	int ar[100], size, value, index, con;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter t5he elements :\n");
	for(int j=0;j<size;j++){
		scanf("%d",&ar[j]);
	}
	do{
		printf("Enter the element to be serached : ");
		scanf("%d",&value);
		index = linearSer(ar,size,value);
		index != -1 ? printf("\n%d found at the index %d\n",value,index): printf("\nElement not found\n");
		printf("press 1 to continue\n");
		scanf("%d",&con);
	}
	while(con == 1);
	return 0;
}

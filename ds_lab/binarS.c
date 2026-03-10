#include <stdio.h>
int binarySer(int *ptr,int size,int value){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(*(ptr+j)<*(ptr+i)){
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	int first=0,last=size-1,mid;
        mid = (first+last)/2;
	if(*(ptr+last) ==  value){
		return last;
	}
	while(first <= last){
	        mid = first+(last-first)/2;
		if(*(ptr+mid) ==  value){
			return mid;
		}
		else if(value > *(ptr+mid)){
			first = mid+1;
		}
		else if(value < *(ptr+mid)){
			last = mid-1;
		}
	}
	return -1;
}
int main(){
	int ar[100], size, value, index, con;
        printf("Enter the size of the array: ");
        scanf("%d",&size);
        printf("Enter the elements :\n");
        for(int j=0;j<size;j++){
                scanf("%d",&ar[j]);
        }
        do{
                printf("Enter the element to be serached : ");
                scanf("%d",&value);
                index = binarySer(ar,size,value);
                index != -1 ? printf("\n%d found at the sorted position %d\n",value,index+1): printf("\nElement not found\n");
                printf("press 1 to continue\n");
                scanf("%d",&con);
        }
        while(con == 1);
	return 0;
}

#include <stdio.h>
int stack[100],n,top=-1,choice=-1;
void push(){
        int value;
	if(top == n-1){
		printf("Stack Overflow\n\n");
	}
	else{
		printf("Enter the value :");
		scanf("%d",&value);
		top++;
		stack[top]=value;
	}
}
void  pop(){
        if(top == -1){
                printf("Stack Underflow\n");
        }
        else{
		printf("%d deleted\n\n",stack[top]);
                top--;
        }
}
void show(){
	int i;
        for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
	if(i == -1){
		printf("Stack is empty\n\n");
	}
}

void(*ops[3])() = {push,pop,show};
int main(){
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	while(1){
		printf("\n \n");
		printf("Enter the oparation on stack \n1:push	2:pop	3:show	4:exit : ");
		scanf("%d",&choice);
		if(choice == 4){
			 break;
		}
		choice--;
		ops[choice]();
	}
	return 0;
}


#include<stdio.h>
void push();
void pop();
void peek();
void display();
int top=-1;
int stack[5];
void push(){
	if(top==5-1){
		printf("\nStack follows Overflow Condition\n");
	}
	else{
		top+=1;
		printf("\nEnter the element tobe stored in stack : ");
		scanf("%d", &stack[top]);
	}
}
void pop(){
	if(top==-1){
		printf("\nUnderflow condition\n");
	}
	else{
		int temp=stack[top];
		top-=1;
		printf("\nThe Deleted element is %d", temp);
	}
}
void peek(){
	printf("\nThe top element is %d", stack[top]);
}
void display(){
	int i;
	printf("\nThe Elements Stored in Stack are : ");
	for(i=0; i<=top; i++){
		printf("%d ", stack[i]);
	}
	printf("\n");
}
int main(){
	int operation;
	do{
		printf("0:End Program\n1:Push\n2:Pop\n3:Peek\n4:display\n");
		printf("Enter the Operation : ");
		scanf("%d", &operation);
		switch(operation){
			case 0:
				printf("***PROGRAM ENDS***");
				break;
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Invalid data");
				break;
		}
	}
	while(operation!=0);
	return 0;
}

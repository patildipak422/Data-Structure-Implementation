#include<stdio.h>
# define N 5
int top=-1;
int stack[N];
void push();
void pop();
void display();
void peek();
int main(){
	char operation;
	do {
		printf("1 : push, 2 : pop, 3 : peek, 4 : display, 0 : End Program : \n");
		printf("Enter the Operation : ");
		scanf("%d", &operation);
		switch(operation){
			case 0:
				printf("Program Ends");
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
			default :
				printf("Invalid Choice");
		}
	
	}
	while(operation!=0);
	return 0;
}
void push(){
	if(top==N-1){
		printf("Overflow Condition\n");
	}
	else{
		top+=1;
		printf("Enter the Value tobe stored : ");
		scanf("%d", &stack[top]);
	}
}
void pop(){
	int item=stack[top];
	if(top==-1){
		printf("Underflow Condition\n");
	}
	else{
		top-=1;
		printf("The deleted Value is : %d\n", item);
	}
}
void peek(){
	printf("The Top Value is :%d\n", stack[top]);
}
void display(){
	int i;
	printf("The values stored in Stack are :");
	for(i=top; i>=0; i--){
		printf("%d ", stack[i]);
	}
	printf("\n");
}

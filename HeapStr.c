#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Stack
{
	int top;
	unsigned capacity;
	int *array;	
};
//function to create a stack of a given capacity
struct Stack *createStack(unsigned capacity)
{
	struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
	
	stack->capacity=capacity;
	stack->top=-1;
	stack->array=(int*)malloc(stack->capacity*sizeof(int));
	return stack;
}
//to check if stack is full
int isFull(struct Stack *stack)
{
	return (stack->top == stack->capacity -1);
}
//To check if stack is empty
int isEmpty(struct Stack *stack)
{
	return(stack->top==-1);
}
//Function to add an item to stack
void push(struct Stack *stack,int item)
{
	if(isFull(stack))
	return ;
	stack->array[++stack->top]=item;
}
//Function to remove topmost element of stack
int pop(struct Stack *stack)
{
	if(isEmpty(stack))
	return 0;
	return stack->array[stack->top--];
}
//Function to get the top most item from stack
int peek(struct Stack *stack)
{
	if(isEmpty(stack))
	return 0;
	return stack->array[stack->top];
}

//Driver Program 
int main()
{
	struct Stack *stack=createStack(100);
	push(stack,100);
	push(stack,20);
	push(stack,90);
	printf("%d popped from stack\n", pop(stack));
 
    printf("Top item is %d\n", peek(stack));
 
    return 0;
}

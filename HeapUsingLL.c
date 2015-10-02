#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct StackNode{
	int data;
	struct StackNode * next;
};
struct StackNode* newNode(int data)
{
	struct StackNode* stacknode=(struct StackNode*)malloc(sizeof(struct StackNode ));
	stacknode->data=data;
	stacknode->next=NULL;
	return stacknode;
}

// Function to check whether stack is empty
int isEmpty(struct StackNode *root)
{
	return !root;
}
//pushing a new element to stack
void push(struct StackNode ** root,int data)
{
	struct StackNode *stackNode=newNode(data);
	stackNode->next=*root;
	*root=stackNode;
	 printf("%d pushed to stack\n", data);
}
//removing the top element
int pop(struct StackNode **root)
{
	if(isEmpty(*root))
	return INT_MIN;
	struct StackNode*temp=*root;
	*root=temp->next;
	int popped=temp->data;
	free(temp);
	 printf("%d poppedto stack\n", popped);
	return popped;
}
//Function to return the top element
int peek(struct StackNode* root)
{
	if(isEmpty(root))
	return 0;
	return root->data;
}

int main()
{
	struct StackNode* root=NULL;
	push(&root, 10);
	push(&root, 20);
    push(&root, 30);
 
    printf("%d popped from stack\n", pop(&root));
 
    printf("Top element is %d\n", peek(root));
 
    return 0;
}

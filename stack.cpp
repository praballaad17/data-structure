#include <stdio.h>
#include <stdlib.h>

int stack[5];
void push(int);
int pop();
void traverse();
int is_empty();
int top_element();
int top =0;
int main()

{
  int element, choice;
  for (;;)
  {
    printf("Stack Operations.\n");
    printf("1. Insert into stack (Push operation).\n");
    printf("2. Delete from stack (Pop operation).\n");
    printf("3. Print top element of stack.\n");
    printf("4. Check if stack is empty.\n");
    printf("5. Traverse stack.\n");
	printf("6. fill the stack.\n");
    printf("7. Exit.\n");
    printf("Enter your choice.\n");
    scanf("%d",&choice);
    
   
    
    switch (choice)
    {
      case 1:
        if (top == 5)
          printf("Error: Overflow\n\n");
        else {
          printf("Enter a value to insert.\n");
          scanf("%d", &element);
          push(element);
        }
        break;
      case 2:
        if (top == 0)
          printf("Error: Underflow.\n\n");
        else {
          element = pop();
          printf("Element removed from the stack is %d.\n", element);
        }
        break;
      case 3:
        if (!is_empty()) {
          element = top_element();
          printf("Element at the top of the stack is %d\n\n", element);
        }
        else
          printf("The stack is empty.\n\n");
        break;
      case 4:
        if (is_empty())
          printf("The stack is empty.\n\n");
        else
          printf("The stack isn't empty.\n\n");
        break;
      case 5:
        traverse();
        break;
      case 7:
        exit(0);
      case 6: 
	      for(;top<5;top++)
    	{
    		printf("enter the stack %dth element",top);
    		scanf("%d",&stack[top]);
    		//top=n;
		}
		break;
   
    }
  }
}
void push(int value) {
  stack[top] = value;
  top++;
}
int pop() {
  top--;
  return stack[top];
}
void traverse() {
  int d;
  if (top == 0) {
    printf("The stack is empty.\n\n");
    return;
  }
  printf("There are %d elements in the stack.\n", top);
  for (d = top - 1; d >= 0; d--)
    printf("%d\n", stack[d]);
  printf("\n");
}
int is_empty() {
  if (top == 0)
    return 1;
  else
    return 0;
}
int top_element() {
  return stack[top-1];
}

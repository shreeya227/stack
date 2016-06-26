/Write a program to implement stack which should be able to check the condition of underflow and overflow.

//Write a program to implement stack which should be able to check the condition of underflow and overflow.

# include <stdio.h>
# define size 10

struct stack
{
	int items[size];
	int top;
}s;

int main()
{
	int choice, element;
	s.top = 0;
	retry:
	printf("1. Enter element in Stack.\n2. Pull element from Stack.\n3. Exit\n");
	printf("Enter your choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			if (s.top == 10)
			{
				printf("Error Overflow\n\n");
			}
			else
			{
				printf("Enter the element to enter : ");
				scanf("%d", &element);
				push(element);
			}
			break;
		case 2:
			if (s.top == 0)
			{
				printf("Error Underflow\n\n");
			}
			else
			{
				element=pop();
				printf("Element pulled from Stack : %d", element);
			}
			break;
		case 3:
			goto exit;
			break;
		default:
			printf("Error. Try Again\n\n");
			break;
	}
	goto retry;
	exit:
	return 0;
}

void push(int value) 
{
   s.items[s.top] = value;
   s.top++;
}
 
int pop() 
{
   s.top--;
   return s.items[s.top];
}   

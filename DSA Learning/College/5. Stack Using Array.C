/*Stack Implementation through Array*/

#include <stdio.h>
#include <conio.h>
int stack[5];
int top=-1;	//index pointing to the top of stack

void push()
{
	int y;

    if((top+1) == 5)
    {
		printf("\nStack Full\n");
	    return;
    }
    else
    {
		printf("\n Enter Number");
		scanf("%d",&y);
	    top++;
	    stack[top]=y;
	    printf("\n%d added to Stack at %d Position\n",y,top);
     }
}
void pop()
{
    int a;

    if(top == -1)
    {
		printf("\nStack Empty\n");
    }
    else
    {
	    a=stack[top];
	    printf("\n %d deleted from stack from %d position",a,top);
	    top--;
    }
}
void display()
{
    int i;

    if(top==-1)
    {
		printf("\nStack Empty\n");
    }
    else
    {
		printf("\n\n\nContents of the stack are : \n");
		for(i=top;i>=0;i--)
		{
			printf("%d", stack[i]);
			if(top == i)
				printf("\t<--- TOP\n");
			else
				printf("\n");
		}
    }
}
int main()
{
	int i,num,menuselect;
    printf("\n\t\tProgram for stack using array\n");
    do
    {
		printf("\n\n\tMain Menu: \n1.Add element to stack\n2.Delete element from the stack\n3.Display Stack\n4.Exit");
		printf("\nSelect menu : ");
		scanf("%d",&menuselect);

		switch(menuselect)
		{
	  		case 1 : push();
		   			break;

	  		case 2 : pop();
		   			break;
			
			case 3 : display();
		   			break;

	  		case 4 : printf("\nExiting the program");
		   			break;

	  		default: printf("Invalid menu item selected.");
		}
     }while(menuselect != 4);
     return 0;
}


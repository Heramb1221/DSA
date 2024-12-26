/*Circular Queue Implementation through Array*/

#include <stdio.h>
#include<conio.h>

int queue[5];
int front=0;
int rear=0;

void addq()
{
	int num;
    if(((rear+1)%5) == front)
    {
		printf("\nCircular Queue Full\n");
	    return;
    }
    else
    {
		printf("\nEnter a number...: ");
	    scanf("%d",&num);
	    queue[rear]=num;
	    printf("\n%d added to Circular Queue at %d position\n",num,rear);
	    rear=(rear+1)%5;
    }
}

void delq()
{
    int a;
    if(front == rear)
    {
		printf("\nCircular Queue Empty\n");
    }
    else
    {
		a=queue[front];
	    printf("\n%d Deleted from queue from %d position",a,front);
	    front=(front+1)%5;
    }
}

void display()
{
    int i;

    if(front==rear)
    {
		printf("\nCircular Queue Empty\n");
    }
    else
    {
    	for(i=front; i%5!=rear; i=(i+1)%5)
    	{
			printf("%d", queue[i]);
			
			if(front == i)
				printf("\t<--- Front\n");
			else
			{
				if((i+1)%5==rear)
					printf("\t<--- Rear\n");
				else
					printf("\n");	
			}	
		}
	}
/*	else
	{
		printf("\n\n\nContents of Circular queue are : \n");
		if(front<rear)
		{
			for(i=front;i<rear;i++)
			{
				printf("%d", queue[i]);
				if(front == i)
					printf("\t<--- Front\n");
				else
				{
			   		if((rear-1) == i)
						printf("\t<--- Rear\n");
			   		else
						printf("\n");
				}
			}
	  	}
		else
	  	{
			for(i=front;i<5;i++)
			{
				printf("%d", queue[i]);
				if(front == i)
					printf("\t<--- Front\n");
				else
					printf("\n");
			}
			for(i=0;i<rear;i++)
			{
				printf("%d", queue[i]);
				if((rear-1) == i )
					printf("\t<--- Rear\n");
				else
					printf("\n");
			}
		} 
    }*/
}

int main()
{

	int i,num,menuselect;
     
    printf("\n\t\tProgram for circular queue using array\n");
    do
    {
		printf("\n\n\tMain Menu: \n1.Add element \n2.Delete element\n3.Display Queue\n4.Exit");
		printf("\nSelect menu : ");
		scanf("%d",&menuselect);

		switch(menuselect)
		{
	  		case 1:	addq();
		   			break;
			
			case 2:	delq();
					break;
			
			case 3: display();
					break;

	  		case 4 : printf("\nExiting the program");
		   			break;

	  		default: printf("Invalid menu item selected.");
		}
     }while(menuselect != 4);
	return 0;
}


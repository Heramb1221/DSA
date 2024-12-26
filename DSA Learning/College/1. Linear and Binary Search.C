//Implementation of linear search and Binary Search Menu Driven Program
#include<stdio.h>
int linearsearch()
{
	int  arr[10],num,i,n,pos=-1,found=0;
	
	//clrscr();
	printf("\nEnter the number of elements in the array:- ");
	scanf("%d",&n);
	printf("\nEnter the elements:- ");
	
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i] );
	
	printf("\nEnter the number which is to be searched:- ");
	scanf("%d",&num);

	for(i=0;i<n;i++)
	{
    	if(arr[i]==num)
		{
	       found=1;
	       pos=i;
	       printf("\n %d is found in the array at position  =  %d ",num,i);
	       break;
	   	}
	}

	if(found==0)
    	printf("\n%d is does not exist in the array.", num);

	return 0;
	//getch();
}

/*OUTPUT:
Enter the number of elements in the array:- 6

Enter the elements:- 12 55 1 100 13 66

Enter the number which is to be searched:- 100

100 is found in the array at position  =  3*/


int binarysearch()
{
	int first,last,mid,a[10],i,key,flag=0;
	//clrscr();
	printf("Enter 10 elements of array");

	for (i=0; i<10; i++)
		scanf("%d",&a[i]);

	printf("Enter key=");
	scanf("%d",&key);

	first=0;
	last=9;
	do
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}

		if(key<a[mid])
			last=mid-1;

		if(key>a[mid])
			first=mid+1;
	}while(first<=last);

if(flag==1)
	printf("Element %d is Found at %d position",key,mid);
else
	printf("Element %d Not Found in array",key);
return 0;
//getch();
}

int main()
{
	int ch;
	//clrscr();
	do
	{
		printf("\n1.Linear Search\n2.Binary Search\n3.Exit");

		printf("\n Enter your choice");
		scanf("%d",&ch);

	   switch(ch)
	   {
		case 1: linearsearch();
			break;

		case 2: binarysearch();
			break;

		case 3: break;

		case 4: printf("\n Wrong Choice Entered");
			break;
	   }
	}while(ch!=3);
	return 0;
}


/*Output
Enter 10 elements of array
13 25 37 42 54 67 71 83 91 97
Enter key= 91
Element 91 is Found at 8 position */

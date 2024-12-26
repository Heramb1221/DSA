/*Implementation of Merge Sort & Quick Sort Menu Driven*/
#include<stdio.h>

int mergesort();
int quicksort();

int main()
{

     int choice;
     //clrscr();
     do
     {
	printf("\n\t\tProgram for Merge Sort and Quick Sort \n");
	printf("\n\tMain Menu: \n1.Merge Sort\n2.Quick Sort\n3.Exit");
	printf("\nSelect menu : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			mergesort();
			break;
		case 2:
			quicksort();
			break;
		case 3:
			printf("\nExiting the program");
		        break;

	       default: printf("Invalid menu item selected.");
	}
     }while(choice != 3);
     return 0;
}


//Function Declaration
void qsort(int [],int,int);
int partition(int [],int,int);

int quicksort()
{
	int a[50],i,n;
	//clrscr();

	printf("\n Enter Size of Array:");
	scanf("%d",&n);

	printf("\n Enter Array Elements:\n");

	for(i=0;i<n;i++)
	{
		printf(" Enter %d Element:",i+1);
		scanf("%d",&a[i]);
	}

	//Function Call
		qsort(a,0,n-1);

	//Print Array
	printf("\n Sorted Array is : ");

	for(i=0;i<n;i++)
	{
		printf("%d\n\t\t",a[i]);
	}
return 0;
	//getch();
}

//Function Definition
void qsort(int a[],int l,int u)
{
	int j;

	if(l<u)
	{
		j= partition(a,l,u);

		qsort(a,l,j-1);

		qsort(a,j+1,u);
	}
}

int partition(int a[],int l, int u)
{
	int v,i,j,temp;

	v = a[l];

	i = l;
	j = u+1;

	do
	{
		do
		{
			i++;
		}while(a[i] < v && i<=u);

		do
		{
			j--;
		}while(v<a[j]);

		if(i<j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}while(i<j);

	a[l]= a[j];
	a[j] = v;

	return(j);
}

/* Output
Enter Size of Array : 12

Enter Array Elements : 44 33 11 55 77 90 40 60 99 22 88 66

Sorted Array is: 11 22 33 40 44 55 60 66 77 88 90 99
*/

void merge( int [],int ,int, int);
void part( int [],int,int);

int mergesort()
{
	int arr[30];
	int i,size;

	//clrscr();

	printf("\n\t--------Merge Sorting Method-------\n\n");

	printf("\n Enter Total No. of Elements:");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("\n Enter %d Element :",i+1);
		scanf("%d",&arr[i]);
	}

	part(arr,0,size-1);

	printf("\n\t------Merged Sorted Elements--------\n\n");
	for(i=0;i<size;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
//getch();
}

void part(int arr[],int min,int max)
{
	int mid;

	if(min<max)
	{
		mid = (min + max)/2;

		part(arr,min,mid);

		part(arr,mid+1,max);

		merge(arr,min,mid,max);
	}
}

void merge(int arr[],int min,int mid,int max)
{
	int tmp[30];
	int i,j,k,m;

	j = min;
	m = mid+1;

	for(i=min ; (j<=mid && m<=max) ; i++)
	{
		if(arr[j] <= arr[m])
		{
			tmp[i] = arr[j];
			j++;
		}
		else
		{
			tmp[i] = arr[m];
			m++;
		}
	}

	if(j>mid)
	{
		for(k=m; k<=max; k++)
		{
			tmp[i] = arr[k];
			i++;
		}
	}
	else
	{
		for(k=j; k<=mid; k++)
		{
			tmp[i] = arr[k];
			i++;
		}
	}

	for(k=min;k<=max;k++)
	{
		arr[k] = tmp[k];
	}
}

/*Output
Enter Total No. of Elements: 14

Enter Elements : 66 33 40 22 55 88 60 11 80 20 50 44 77 30

------Merged Sorted Elements--------
11 20 22 30 33 40 44 50 55 60 66 77 80 88 */


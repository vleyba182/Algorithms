/*###########################################################################################################
#		
#
#		Algorithm					Bubblesort
#		Class						Sorting algorithm
#		Data structure				Array
#		Worst case performance		O(n^2)
#		Best case performance		O(n)
#		Average case performance	O(n^2)
#		Worst case space complexity	O(1) auxiliary
#
#
###########################################################################################################*/


#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void bubbleSort(int [], int);

int main() 
{

	int i, length, size;

	printf("Enter the number of values to sort: \t");
	scanf("%d", &length);
	printf("Values to Sort: %d\n", length);

	int numberToBeSorted [length];	
	size = sizeof(numberToBeSorted)/sizeof(int);
	printf("Print Array Size %d\n", size );
	
	for (i = 0; i < size; i++)
	{

		numberToBeSorted[i] = rand() % 100 ;
	}

	printf("---------Numbers To Be Sorted---------\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", numberToBeSorted[i]);

	}

	printf("\n");

	bubbleSort(numberToBeSorted, size);

	return 0;
}

void bubbleSort(int list[], int size)
{
 	int i, j, a, b, temp, test;
 
	printf("\n---------------Sorting---------------\n");
 	
 	for (a = 0 ; a < (size - 1); a++)
	{
    	for (b = 0 ; b < size - a - 1; b++)
    	{
      		if (list[b] > list[b+1])
      		{ 
        		temp = list[b];
        		list[b] = list[b+1];
        		list[b+1] = temp;
      		}

      		for (i = 0; i < size; i++)
			{
				
					printf("%d\t", list[i]);
					j++;	
			}

			printf("\n");
    	}
    }
}
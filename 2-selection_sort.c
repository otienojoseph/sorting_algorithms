#include "sort.h"

/**
 * selection_sort - sorts a doubly linked list of integers in ascending order
 * @arrayay: pointer to pointer to head of list to sort
 * @size: 
*/
void selection_sort(int *array, size_t size)
{
    int min_index, temp;
    size_t i, j;

	/* Traverse through all array elements */
	for (i = 0; i < size - 1; i++)
    {
		/* Find the minimum element in the unsorted part of the array */
		min_index = i;

		for (j = i + 1; j < size; j++)
        {
			if (array[j] < array[min_index])
				min_index = j;
		}

		/* Swap the found minimum element with the first element */
		temp = array[i];
		array[i] = array[min_index];

		array[min_index] = temp;
        print_array(array, size);
	}
}

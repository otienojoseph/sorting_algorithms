#include "sort.h"

/**
 * bubble_sort - Sort an array in ascending order
 * using bubble sort algorithm
 * @array: Array to sort
 * @size: Size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}

		if (swapped == 0)
			break;

	}
}

#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @x: First integer to swap.
 * @y: Second integer to swap.
 */
void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x= *y;
	*y = tmp;
}

/**
 * bubble_sort is the sorting of array of integers in ascending order.
 * @array: Array of integers to be sorted.
 * @size: Size of the array of element.
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, lng = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (j = 0; j < lng - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
				bub = false;
			}
		}
		lng--;
	}
}

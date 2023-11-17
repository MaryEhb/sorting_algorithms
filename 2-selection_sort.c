#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array of int
 * @size: array size
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	unsigned int i, j, index;

	if (!array || size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		tmp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < tmp)
			{
				tmp = array[j];
				index = j;
			}
		}

		if (i != index)
		{
			array[index] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

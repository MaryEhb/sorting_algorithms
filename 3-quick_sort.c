#include "sort.h"

/**
 * partition - quick sort partitioning
 * order using the Quick sort algorithm
 * @original_arr: original_arr
 * @array: array of int
 * @size: array size
 * @os: original size
 * Return: Nothing
 */

int partition(int *original_arr, int *array, size_t size, size_t os)
{
	int pivot_index = size - 1, tmp;
	int i = 0;

	while (i < pivot_index)
	{
		while (array[i] > array[pivot_index])
		{
			tmp = array[i];
			array[i] = array[pivot_index - 1];
			array[pivot_index - 1] = array[pivot_index];
			array[pivot_index] = tmp;
			pivot_index -= 1;
		}
		i++;
	}
	if (pivot_index != (int)(size - 1))
		print_array(original_arr, os);
	return (pivot_index);
}

/**
 * quick_sort_func - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @original_arr: original_arr
 * @array: array of int
 * @size: array size
 * @os: original size
 * Return: Nothing
 */

void quick_sort_func(int *original_arr, int *array, size_t size, size_t os)
{
	int p;

	if (size > 1)
	{
		p = partition(original_arr, array, size, os);
		quick_sort_func(original_arr, array, p, os);
		quick_sort_func(original_arr, array + p + 1, size - p - 1, os);
	}
}

/**
 * quick_sort - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: array of int
 * @size: array size
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_func(array, array, size, size);
}

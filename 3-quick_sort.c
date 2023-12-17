#include "sort.h"
/**
 * swap - Because sometimes in the array dance, elements like to tango
 * @array: The dance floor – your array of elements
 * @item1: The first dance partner to swap
 * @item2: The second dance partner to swap
 */

void swap(int *array, ssize_t item1, ssize_t item2)
{
	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
/**
 * lomuto_partition - Embracing the chaos, dancing through the array,
 *                    Lomuto style, because sorting is a party!
 * @array: The dance floor – your array of elements
 * @first: The starting point of the array adventure
 * @last: The grand finale, the last array element
 * @size: The size of the array – because every dance needs space
 * Return: The dazzling position of the last element after the dance-off
 */

int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = array[last];
	ssize_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (current);
}
/**
 * qs - Because sometimes arrays need a little "quickness" in their life,
 *      and what's quicker than a well-executed quicksort?
 * @array: The arena for the quicksort showdown
 * @first: The first contender in the sorting ring
 * @last: The last warrior standing tall in the array battlefield
 * @size: The size of the army – because size matters in the sorting war
 */

void qs(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;


	if (first < last)
	{
		position = lomuto_partition(array, first, last, size);

		qs(array, first, position - 1, size);
		qs(array, position + 1, last, size);
	}
}
/**
 * quick_sort - Because sometimes arrays need a pep talk before
 *              the quicksort algorithm kicks in – getting them ready
 *              for the speediest sorting adventure!
 * @array: The array battlefield, where sorting wars are won and lost
 * @size: The size of the troops – because a well-prepared army conquers all
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}

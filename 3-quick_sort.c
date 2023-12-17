#include "sort.h"
/**
 * swap - Because sometimes in the arr dance, elements like to tango
 * @arr: The dance floor – your arr of elements
 * @item1: The first dance partner to swap
 * @item2: The second dance partner to swap
 */

void swap(int *arr, ssize_t item1, ssize_t item2)
{
	int okt;

	okt = arr[item1];
	arr[item1] = arr[item2];
	arr[item2] = okt;
}
/**
 * lomuto_partition - Embracing the chaos, dancing through the arr,
 *                    Lomuto style, because sorting is a party!
 * @arr: The dance floor – your arr of elements
 * @first: The starting point of the arr adventure
 * @last: The grand finale, the last arr element
 * @size: The size of the arr – because every dance needs space
 * Return: The dazzling position of the last element after the dance-off
 */

int lomuto_partition(int *arr, ssize_t first, ssize_t last, size_t size)
{
	int pivot = arr[last];
	ssize_t cur = first, fnd;

	for (fnd = first; fnd < last; fnd++)/* comment*/
	{
		/* comment*/
		if (arr[fnd] < pivot)/* comment*/
		{
			/* comment*/
			if (arr[cur] != arr[fnd])/* comment*/
			{
				/* comment*/
				swap(arr, cur, fnd);
				print_array(arr, size);
			}
			cur++;/* comment*/
		}
	}
	if (arr[cur] != arr[last])/* comment*/
	{
		/* comment*/
		swap(arr, cur, last);/* comment*/
		print_array(arr, size);/* comment*/
	}
	return (cur);
}
/**
 * qs - Because sometimes arrays need a little "quickness" in their life,
 *      and what's quicker than a well-executed quicksort?
 * @arr: The arena for the quicksort showdown
 * @first: The first contender in the sorting ring
 * @last: The last warrior standing tall in the arr battlefield
 * @size: The size of the army – because size matters in the sorting war
 */

void qs(int *arr, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;


	if (first < last)
	{
		position = lomuto_partition(arr, first, last, size);

		qs(arr, first, position - 1, size);/* comment*/
		/* comment*/
		qs(arr, position + 1, last, size);
	}
}
/**
 * quick_sort - Because sometimes arrays need a pep talk before
 *              the quicksort algorithm kicks in – getting them ready
 *              for the speediest sorting adventure!
 * @arr: The arr battlefield, where sorting wars are won and lost
 * @size: The size of the troops – because a well-prepared army conquers all
 */

void quick_sort(int *arr, size_t size)
{
	if (!arr || size < 2)/* comment*/
		return;
		/* comment*/
	qs(arr, 0, size - 1, size);
}

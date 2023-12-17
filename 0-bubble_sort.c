#include "sort.h"
/**
 * bubble_sort - Because sometimes arrays need a spa day to relax and get sorted
 * @arr: The arr that could use a bit of order
 * @size: The size of the arr – because size matters when it comes to sorting
 */
void bubble_sort(int *arr, size_t size)
{

	size_t numi, dex, okt = 0;

	if (size < 2)
		return;
	for (numi = 0; numi < size; numi++)
	/* comment*/
		for (dex = 0; dex < size; dex++)/* comment*/
		{
			/* comment*/
			if (arr[dex] > arr[dex + 1] && arr[dex + 1])/* comment*/
			{
			okt = arr[dex];
			arr[dex] = arr[dex + 1];/* comment*/
			/* comment*/
			arr[dex + 1] = okt;
			/* comment*/
			/* comment*/
			print_array(arr, size);
			}
		}
}


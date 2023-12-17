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
		for (dex = 0; dex < size; dex++)
		{
			if (arr[dex] > arr[dex + 1] && arr[dex + 1])
			{
			okt = arr[dex];
			arr[dex] = arr[dex + 1];
			arr[dex + 1] = okt;
			print_array(arr, size);
			}
		}
}

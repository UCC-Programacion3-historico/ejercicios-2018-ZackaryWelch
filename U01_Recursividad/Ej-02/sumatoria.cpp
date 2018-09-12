#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
	if(size > 0)
		return arr[size-1]+sumatoria(arr, size-1);
	else
		return 0;
}

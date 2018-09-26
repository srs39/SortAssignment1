#include "sort2.h"

void sort2(int *a, int n)
	{ int i,temp, j, min_index;
	  for (i = 0; i < n-1; i++){
		min_index = i;
		for (j = i+1; j < n; j++){
			if (a[j] < a[min_index]){
				min_index = j;}
		}
	temp = a[min_index];
	a[min_index] = a[i];
	a[i] = temp;
	}

	}

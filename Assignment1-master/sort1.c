#include "sort1.h"

void sort1(int *a, int n)
	{int temp, i, j;
	 for (i = 0; i <  n; i++){
		for (j = 0; j < n-i-1; j++){
			if ( a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;}
		}
	} 


	}


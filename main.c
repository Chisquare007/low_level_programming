#include <stdio.h>
#include "chioma.h"
int main(){
	float areaT = triangle(8,12);
	int areaL = rectangle(3,9);

	printf("%f\n",areaT);
	printf("%d\n",areaL);

	return 0;
}

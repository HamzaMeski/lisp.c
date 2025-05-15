

#include<inttypes.h>
#include<stdio.h>



int main()
{
	int nmb = 24;
	printf("Memory address as integer: %" PRIuPTR "\n", (uintptr_t)&nmb); 


	return 0;
}


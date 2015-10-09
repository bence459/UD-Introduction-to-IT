//$ gcc elso.c -o elso -Wall -std=c99
//$ ./elso

#include <stdio.h>

int main(int argc, char** argv){
	
	for (int i = 0; i < 1000; i++)
		printf("%d ", i);
	printf("\n");

	return 0;
}
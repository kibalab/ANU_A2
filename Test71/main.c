#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>

int main()
{
	int na[100], i;
	int *p_nacopy = NULL;

	for (i = 0; i< 100; i++)
	{
		na[i] = i;
	}

	p_nacopy = (int*) calloc(100, sizeof(na));
	// p_nacopy = (int*) malloc(sizeof(na));
	assert(p_nacopy);

	memcpy(p_nacopy, na, sizeof(na));

	for(i = 0; i< 100; i++)
	{
		printf("%d ", p_nacopy[i]);
	}
	free(p_nacopy);
}


// calloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Allocate memory for an array of 5 integers
    int no_of_elements = 5;
    int *ptr = (int *)calloc(no_of_elements, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }
    for (int i = 0; i < no_of_elements; i++)
    {
        ptr[i] = i * 4;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}
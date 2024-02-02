// malloc() and free()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory for an array of 5 integers
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with error
    }
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i * 4;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(10 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Failed memory reallocation.\n");
        return 1;
    }
    else
    {
        printf("Successful memory reallocation.\n");
    }
    ptr = realloc(ptr, 20 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Failed memory reallocation.\n");
        return 1;
    }
    else
    {
        printf("Successful memory reallocation.\n");
    }
    free(ptr);
    return 0;
}
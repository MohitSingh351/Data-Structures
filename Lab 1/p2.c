// Call by reference
#include <stdio.h>
void swap(int *a, int *b) {
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
int main() {
 int a, b;
 printf("Enter value of 'a': ");
 scanf("%d", &a);
 printf("Enter value of 'b': ");
 scanf("%d", &b);
 printf("The values of 'a' and 'b' before swapping are: %d and %d\n", a, b);
 swap(&a, &b); // Passing the addresses of a and b
 printf("The values of 'a' and 'b' after swapping are %d and %d\n", a, b);
 
 return 0;
}
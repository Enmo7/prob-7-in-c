#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a , b ;

    printf("Enter The Number : \n");
    scanf("%d", &a);

    b = a+1;

    printf("Before Increment : %d \n", a);
    printf("After Increment : %d \n", b);

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char strArr[] = "abcd";
    int intArr[] = {1,2,3,4};

    char *strPtr = strArr;
    char *intPtr = intArr;

    for (int i = 0; i < 4; ++i)
    {
        printf("*strPtr = %c, strPtr = %p\n", *strPtr, strPtr);
        printf("*intPtr = %c, intPtr = %p\n\n", *intPtr, intPtr);

        ++strPtr;
        ++intPtr;
    }
    return 0;
}
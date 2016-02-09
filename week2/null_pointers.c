#include <stdlib.h>
#include <assert.h>

void someFunction(int *output){
    assert(output != NULL);
    *output = 42;
}

int main(int argc, char const *argv[])
{
    int *intPtr;
    someFunction(intPtr);
    return 0;
}
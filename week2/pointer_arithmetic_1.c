#include <stdio.h>

int main(int argc, char const *argv[])
{
    char greeting[] = "Hello world\n";
    char *currentLetter = greeting;

    while(*currentLetter != '\0') {
        putchar(*currentLetter);
        ++currentLetter;
    }
    return 0;
}
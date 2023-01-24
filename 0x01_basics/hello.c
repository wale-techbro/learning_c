#include <stdio.h>

/*
* Write a simple program that takes
* user input and prints it
*/

int main(void)
{
    char *name ;
    printf("What is your name: ");
    scanf("%s", &name);
    
    printf("Hello, %s\n", &name);
}

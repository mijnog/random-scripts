#include <stdio.h>

int main() {
    char name[8]; // Assuming the name will not exceed 100 characters

    printf("Hello! What is your name?\n");
    gets(name); // Deprecated, but for simplicity in this example

    printf("Hello, %s!\n", name);

    return 0;
}

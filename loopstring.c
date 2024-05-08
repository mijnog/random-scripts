#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "This is a c string!";
    char str2[] = "This is another string!";
    char firstName[30];


    printf("Hey! What is your first name? \n");

    scanf("%s", firstName);

    // Output the text
    printf("Hello %s!\n", firstName);

    int stringLength = strlen(str);
    int stringLength2 = strlen(str2);
    for (int i=0;i<stringLength + stringLength2 + 20;i++){
        printf("Char at position %d is %c \n", i, str[i]);
    }
    printf("Wonderful!");
    return 0;

}
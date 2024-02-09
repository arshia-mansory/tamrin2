#include <stdio.h>

int main()
{
    // Declare an array of 14 characters
    char name[14];

    // Assign each element the ASCII value of each letter in your name
    name[0] = 65; // A
    name[1] = 82; // R
    name[2] = 83; // S
    name[3] = 72; // H
    name[4] = 73; // I
    name[5] = 65; // A
    name[6] = 32; // space
    name[7] = 77; // M
    name[8] = 65; // A
    name[9] = 78; // N
    name[10] = 83; // S
    name[11] = 79; // O
    name[12] = 82; // R
    name[13] = 89; // Y

    // Add a null character at the end of the array
    name[14] = '\0';

    // Print the name
    printf("MY name in ASCII language is: %s\n", name);

    return 0;
}

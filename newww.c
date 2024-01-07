#include <stdio.h>

int main() {
    FILE *filePointer;
    char character;

    // Open the file in read-only mode
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        // Error handling if the file couldn't be opened
        printf("Unable to open the file.\n");
        return 1;
    }

    // Read and print the content of the file
    while ((character = fgetc(filePointer)) != EOF) {
        printf("%c", character);
    }

    // Close the file when done
    fclose(filePointer);

    return 0;
}
// Include system-wide header files
// Use <> to quote the system-wide header file
#include <stdio.h>
#include <stdlib.h>


// Include a header file of a given path
// Use "" to quote the path to the header file
#include "./draw.h"

// main() is the entry point of every C program.
// All C programs start from the main() function.
int main(int argc, char* argv[]){
    // argc is the number of arguments passed to this program
    // argv is the list of arguments, passed as an array of char* pointers
    // The first arg in argv will be the program filename
    //     so the real argument passed to the program starts from argv[1]

    // Check if we have 4 arguments
    if (argc != 4){
        // Print out how many args are there using printf()
        // printf() takes a format string and a list of variables to print
        printf("4 args are needed, but you have %d args.\n", argc);
        // Exit with an exit code = 1, stating abnormal exit
        // exit() allows the program to quit at arbitrary location
        exit(1);
    }

    // atoi() casts a char* value to int value, defined in stdlib.h

    // Number of rows for triangle
    int triaRows = atoi(argv[1]);

    // Number of top asterisks for the trapezoid
    int trapRows = atoi(argv[2]);
    // Number of bottom asterisks for the trapezoid
    int trapCols = atoi(argv[3]);



    // Call the functions to draw a rectangle and a triangle
    // First draw a rectangle of given rows and columns using drawRectangle()...
    drawRectangle(3, 5);
    // -----------------------------
    // Make all edits below this line...
    // Then draw a triangle of given rows using drawTriangle()...
    drawTriangle(triaRows);

    // Then draw a right trapezoid of given rows using drawTriangle()...
    drawRightTrapezoid(trapRows, trapCols);

    // ... and make all edits above this line
    // -----------------------------
    // Return 0 to indicate the program exits normally
    // Any other value means the program exits with an error
    //     (you've seen exit(1) will let the program exit with error code = 1)
    return 0;
}

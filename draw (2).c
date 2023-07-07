#include <stdio.h>
// For both of the functions, use printf() to print the output to the terminal.


void drawRectangle(int rows, int columns){
    /*
    A function to draw a rectangle using asterisks (*) with given number of rows and columns.
    E.g.: If rows = 2 and columns = 4, you should have the following rectangle:

    ****
    ****

    This function is provided to you as reference.
    */
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            printf("*");
        }
        printf("\n");
    }
}

void drawTriangle(int rows){
    /*
    A function to draw a triangle using asterisks (*) and plus signs (+)
    with given number of rows.
    Use the two symbols alternately, starting with * on odd rows and + on even rows.
    E.g.: If rows = 4, you should have the following triangle:

    *
    +*
    *+*
    +*+*

    */
    int i = 0;
    int j = 0;
    // Maybe more variables needed? Add them below...
   

    // Do something below...
    for (i = 1; i <= rows; i++){  
        if (i % 2 == 1) {              //creating an if statement for what should happen if the row is an odd row
            for (j = 1; j <= i; j++){  //for loop to control how many characters are printed depending on the rows variable (first row prints 1 character, second row prints 2 characters, and so on)
                if (j % 2 == 1){       //if and else if statements to print "*" if the position in the row is odd and "+" if the position in the row is even
                    printf("*");
                }
                else if (j % 2 == 0){
                    printf("+");
                }
            }
        }
        else if (i % 2 == 0){         //creating an else if statment for what should happen if the row is an even row
            for (j = 1; j <= i; j++){ //for loop to control how many characters are printed depending on the rows variable (first row prints 1 character, second row prints 2 characters, and so on)
                if (j % 2 == 1){      //if and else if statements to print "+" if the position in the row is odd and "*" if the position in the row is even
                    printf("+");
                }
                else if (j % 2 == 0){
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}

void drawRightTrapezoid(int top, int bottom){
    /*
    A function to draw a right trapezoid using asterisks (*) and plus signs (+), 
    with the top row having top characters and the bottom row having bottom characters."
    Use the two symbols alternately, starting with * on odd rows and + on even rows.
    E.g.: If top = 3 and bottom = 5, you should have the following trapezoid:

    *+*
    +*+*
    *+*+*

    */
    int i = 0;
    int j = 0;
    // Maybe more variables needed? Add them below...
    int numElements = 0;
    int delta = abs(bottom - top); //different between top and bottom row characters
    
    // Do something below...
    if(bottom > top){                                               //else if statement sees if trapezoid is flipped or not, not flipped means bottom is greater than top, flipped means bottom is less than top
        numElements = bottom + top - 2;                             //numElements controls how many columns print, needs to start - 2 in order for not flipped right trapezoid to be correct orientation
        for (i = 1; i <= (delta + 1); i++){                         //for loop that creates the number of rows
            if (i % 2 == 1) {                                       //creating an if statement for what should happen if the row is an odd row
                    for (j = bottom; j <= (numElements + i); j++){  //this for loop fills in the rest of the columns but does it numElements + i times so the number of characters per column changes correctly and increments as the rows go down
                        if (j % 2 == 1){                            //if and else if statements to print "*" if the position in the row is odd and "+" if the position in the row is even
                            printf("*");
                        }
                        else if (j % 2 == 0){
                            printf("+");
                        }
                    }
            }
            else if (i % 2 == 0){                                  //creating an else if statment for what should happen if the row is an even row
                    for (j = bottom; j <= (numElements + i); j++){ //this for loop fills in the rest of the columns but does it i+numElements times so the number of characters per column changes correctly
                        if (j % 2 == 1){                           //if and else if statements to print "+" if the position in the row is odd and "*" if the position in the row is even
                            printf("+");
                        }
                        else if (j % 2 == 0){
                            printf("*");
                        }
                    }
            }
            printf("\n");
        }
    }
    else if(bottom < top){                                          
        numElements = bottom + top;                                 //numElements controls how many columns print
        for (i = 1; i <= (delta + 1); i++){                         //for loop that creates the number of rows
            if (i % 2 == 1) {                                       //creating an if statement for what should happen if the row is an odd row
                    for (j = bottom; j <= (numElements - i); j++){  //this for loop fills in the rest of the columns but does it numElements - i times so the number of characters per column changes correctly, this way it decrements so it flips the trapezoid
                        if (j % 2 == 1){                            //if and else if statements to print "*" if the position in the row is odd and "+" if the position in the row is even
                            printf("*");
                        }
                        else if (j % 2 == 0){
                            printf("+");
                        }
                    }
            }
            else if (i % 2 == 0){                                   //creating an else if statment for what should happen if the row is an even row
                    for (j = bottom; j <= (numElements - i); j++){  //this for loop fills in the rest of the columns but does it numElements - i times so the number of characters per column changes correctly, this way it decrements so it flips the trapezoid
                        if (j % 2 == 1){                            //if and else if statements to print "+" if the position in the row is odd and "*" if the position in the row is even
                            printf("+");
                        }
                        else if (j % 2 == 0){
                            printf("*");
                        }
                    }
            }
            printf("\n");
        }
    }
}

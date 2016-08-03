// **** Include libraries here ****
// Standard libraries
#include <stdio.h>

//Class specific libraries
#include "BOARD.h"

// Microchip libraries
#include <xc.h>

// User libraries
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    BOARD_Init();
    /***************************************************************************************************
     * Your code goes in between this comment and the following one with asterisks.
     **************************************************************************************************/
    //Declaring variables (fahrenheit, celcius, lower bound of table, upper bound, and step by which the table increases)
    float fahr, cel, kelv;
    int lower, upper, step;
    //    char F = (char)"F";
    //    char C = (char)"C";
    //    char K = (char)"K";

    //Initialize variables
    lower = 0; //lower limit of table
    upper = 300; //upper limit of table
    step = 20; //step by which the table goes up
    fahr = lower; //initializing initial fahrenheit value to first value of the table

    //printing headers for celcius table
    printf("%6c %3c\n", 'F', 'C');

    //printing table
    while (fahr <= upper) {
        cel = (5.0 / 9.0)*(fahr - 32);
        printf("%7.1f %04.0f\n", (double) fahr, (double) cel);
        fahr = fahr + step;
    }


    fahr = lower; //reset bounds for second table

    //printing header for kelvin table
    printf("%6c %3c\n", 'K', 'F');

    //printing table
    while (kelv <= upper) {
        fahr = (((kelv - 273.15)*1.8) + 32);
        printf("%7.1f %04.0f\n", (double) kelv, (double) fahr);
        kelv = kelv + step;
    }


    /***************************************************************************************************
     * Your code goes in between this comment and the preceding one with asterisks.
     **************************************************************************************************/

    // Returning from main() is bad form in embedded environments. So we sit and spin.
    while (1);
}

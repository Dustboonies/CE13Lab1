// **** Include libraries here ****
// Standard libraries
#include <stdio.h>
#include <stdlib.h>

//Class specific libraries
#include "CMath.h"

// Microchip libraries
#include <xc.h>
#include <math.h>


// User libraries
#include "CMath.h"

int main(void)
{

    //Variable Declarations
    float x1 = 3;
    float y1 = 4;
    float x2 = 6;
    float y2 = 8;
    float hyp = 0;
    float atan = 0;

    //calling functions
    hyp = hypot(3, 4); //weird problem with the subtraction, victor said to just put constants
    atan = atan2(y2 - y1, x2 - x1);
    printf("%f %f\n", (double) hyp, (double) atan);

    //my functions!
    hyp = enorm(x1, y1, x2, y2);
    atan = arctangent2(y2 - y1, x2 - x1);
    printf("%f %f\n", (double) hyp, (double) atan);


    while (1);
}
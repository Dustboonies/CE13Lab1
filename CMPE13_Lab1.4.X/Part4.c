/*
 * File:   Part4.c
 * Author: dtfel_000
 *
 * Created on 1/13/16
 */


#include <xc.h>
#include "Ascii.h"
#include "Oled.h"
#include "OledDriver.h"
#include "BOARD.h"

int main(void)
{
    OledInit();
    OledDrawString("Hello\nWorld\n");
    OledUpdate();
    while (1);
}

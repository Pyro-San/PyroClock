//
// FILE: PyroClock
// PURPOSE: This is going to be the main controller for my ATMEL based sunrise clock/lamp
//

// TODO: Modify SevSeg to enable characters
#include <SevSeg.h>

// Create an instance of the object
SevSeg sevseg;

// Create global vars
unsigned long timer;
int CentSec = 0;

void setup()
{
    // Common anode display in use
    // pin 2-5 are the segment blocks
    // pin 6-13 are the individual segments
    // TODO: Multiplex these
    sevseg.Begin(1,2,3,4,5,6,7,8,9,10,11,12,13);
    // brightness set low to start with (0 to 100)
    // TODO: Make this variable in hardware
    sevseg.Brightness(25);

    timer = millis();
}

void loop()
{
    // Produce an output on the display
    sevseg.PrintOutput();

    sevseg.NewNum(8888,(byte) 1);
}

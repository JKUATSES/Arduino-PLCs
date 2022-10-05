/*
Demontrate usage of plcLib to convert PLC Ladder Logic into arduino sketches

This program reads a switch input that is normally closed and turns off a lamp/actuator

Author: Edwin Mwiti
Github: github.com/bytecod3

*/

#include <plcLib.h>

void setup() {
  
  // setup inputs and outputs
  setupPLC();

}

void loop() {
  
  inNot(X0); //read input 0(Read Switch S1) // if switch is closed, the lamp turns off
  out(Y0); // send to output 0(Send to Lamp LS1)

}

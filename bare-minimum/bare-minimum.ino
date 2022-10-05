/*
Demontrate usage of plcLib to convert PLC Ladder Logic into arduino sketches
Author: Edwin Mwiti
Github: github.com/bytecod3

*/

#include <plcLib.h>

void setup() {
  
  // setup inputs and outputs
  setupPLC();

}

void loop() {
  
  in(X0); //read input 0(Read Switch S1)
  out(Y0); // send to output 0(Send to Lamp LS1)

}

#ifndef WXBOARD_H
#define WXBOARD_H

#define VER	1.0

/*
/* Retro-compatibility with arduino 0023 and previous version */
#if ARDUINO >= 100
#include "Arduino.h"
#define I2CWRITE(x) Wire.write(x)
#define I2CREAD() Wire.read()
#else
#include "WProgram.h"
#define I2CWRITE(x) Wire.send(x)
#define I2CREAD() Wire.receive()
#endif
*/

#include <inttypes.h>



class WXBOARD {
public:
  WXBOARD();
  void begin(void);

protected:

private:

};


#endif
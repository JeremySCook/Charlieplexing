#ifndef Charlie_h
#define Charlie_h

#include "Arduino.h"

class Charlie
{
    public:
      Charlie(int a, int b);
      void plex();
    private:
      int _a; //pin
      int _b; //mode
};

#endif

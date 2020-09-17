#include "Arduino.h"
#include "Charlie.h"

Charlie::Charlie(int a, int b)
{
    _a = a;
    _b = b;
}

void Charlie::plex()
{
  if(_b == 2){
    pinMode(_a, INPUT);  
  }
  else{ 
    pinMode(_a, OUTPUT);
    digitalWrite(_a, _b); 
  }
}

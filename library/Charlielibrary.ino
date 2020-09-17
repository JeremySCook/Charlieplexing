#include "Charlie.h"

Charlie charlie1(3,1);
Charlie charlie2(2,0);
Charlie charlie3(3,0);
Charlie charlie4(2,1);

void setup()
{
}

void loop()
{
  charlie1.plex();
  charlie2.plex(); 
  delay(1000);
  charlie3.plex();
  charlie4.plex(); 
  delay(1000);
}

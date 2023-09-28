//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
  private:
    Horse h[5];
  public:
    int lenght;
    Race();
    Race(int lenght);
    void printLane(int horseNum);
    void start();
};//end class def


#endif

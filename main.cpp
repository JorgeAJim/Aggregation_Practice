//main.cpp


#include <iostream>
#include "horse.h"
#include "race.h"

int main(){
  std::cout << "Creating the Race" << std::endl;

  //create a race instance and begin the race
  Race theRace(15);
  theRace.start();


}//end main

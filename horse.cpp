//horse.cpp
//no libaries needed


#include "horse.h"


Horse::Horse() {
  Horse::position = 0;

}//end constructor

void Horse::advance(){
  Horse::position += 1;
}//end advance

int Horse::getPosition(){
  return Horse::position;
}//end getPosition

//race.cpp


#include <iostream>
#include <sstream>
#include <cstdlib>
#include "horse.h"
#include "race.h"


Race::Race(){
  Race::lenght = 15;

  //fill in the horse array to five
  int i = 0;
  for(i = 0; i < 5; i++){
    h[i] = Horse();
  }//end for
}//end constructor

Race::Race(int lenght){
  Race::lenght = lenght;
  int i = 0;
  for(i = 0; i < 5; i++){
    h[i] = Horse();
  }//end for
}//end constructor with parameter

//horseNum is the Horse position value
//printLane isn't printing the all 5 tracks, but one lane
void Race::printLane(int horseNum){
  int i = horseNum;
  int j;

  std::string lane;
  std::stringstream ss;



  for(j = 0; j < lenght; j++){
    if(h[i].getPosition() == j){
      //it doesn't appear that stringstream will work
      //there is no need to iterate through the horses, since I have the parameter
      ss << i;
      std::string horseName = ss.str();
      lane += horseName;
    }
    else{
      lane += ".";
    }//end if
  }//end for

  //print the lane
  std::cout << lane << std::endl;

}//end printLane


void Race::start(){
  int randomSeed;
  std::cout << "Please enter a random seed: " << std::endl;
  std::cin >> randomSeed;
  
  //set the random seed
  srand(randomSeed);

  bool keepGoing = true;
  int i;
  int randomNum;

  //store the winner in a string
  std::string winner;
  std::stringstream ss;

  while(keepGoing){
    for(i = 0; i < 5; i++){
      randomNum = rand() % 2;
      if(h[i].getPosition() == lenght){
        ss << i;
        std::string winningHorse = ss.str();
        winner = "Horse " + winningHorse + " Wins!!";
        keepGoing = false;
      }//end if
      
      if(randomNum == 1){
        h[i].advance();
	printLane(i);
      }
      else if(randomNum == 0){
        //horse doesn't move
        //print the lane
        printLane(i);
      }
      else{
        std::cout << "Something wrong has occured with randomNum or with the win condition" << std::endl;
      }//end if
    }//end for 
    
    std::cout << winner;
    //create a break every five tracks
    std::cout << std::endl;

  }//end while
}//end start

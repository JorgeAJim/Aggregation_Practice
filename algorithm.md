Jorge Jimenez

Professor: Andrew Harris

Course: CSCI 24000

2/1/2022

Project: The Object of Horses

Goal: To create a program that simulates a horse race using object-oriented programming. Using two different objects: one will create the horses, while the other object will manage the race, print the track, and update the 
random seed.

Inputs: The user will need to input an integer that will be used as a random seed.

Outputs: The program will print out the five tracks, one for each horse, each time the location of the horse is changed, until one horse wins. When a horse wins, then the winner should be announced and the program should end.

Steps:

  Libaries:

    The needed libaries will probably include: input/output, cstdlib, or another way to do random seed, and, possibly, stringstream.

  Files Included:

    There will be a total of five files, excluding algorithm and main, that will be located in the same git directory. 
      *horse.h - it is the header file for the Horse object, it is where the "horse" object is created.
      *horse.cpp - it is where the Horse objects methods are filled
      *race.h - it is the header file for the Race object, it is where the "race" object is created and the attributes and methods are defined.
      *race.cpp - it is where the Race objects methods are given actions to accomplish.
      *makefile - connects all files to each other so that it is easier to compile faster
      *main.cpp - it is where an instance of Race is created and runned

  main():

    The main function will need to have all a connection to horse.h and race.h files that within the same directory. 
    Within main(), an intance of Race will be made. That instance will use its start method to run the race.

  Objects/Classes:

    Horse:
     The Horse object will have one private attribute, "position".

     The methods/actions that the Horse object has, are:
       Horse() - a constructure method which will be responsible of setting the "position" of any Horse instance to zero, as every horse must begin at the start
       advance() - a method that will increased the "position" by one
       getPosition() - a method that will return the current "position" value of the Horse instance, which should be an integer

    Race:
      The race.h will need a connection to horse.h that is within the same directory. The race.cpp file, which is responsible for filling in the Race class methods, will need a connection to both race.h and horse.h
      
      The Race object will have two attributes, one private and one public.
	The "h" ARRAY attribute will be a Horse instance, and should be private. The ARRAY should allocate/save five spots in memory/save. 
	The "lenght" attribute will determine the lenght of the track, and it should be public.

      The Race object will have several methods:
	There will be two constructures, one with no parameter given and one where a value for "lenght" can be inputed. Both constructures will use a for loop to fill the "h" ARRAY with 5 elements, those being the five horses. Since we have allocated 5 spaces in memory,
	we are not adding 5 Horse instances to the ARRAY, but rather we are making each element in the ARRAY into a Horse instance.

	The printLane method will print the one lane, and will take an "h" index as a parameter. Using this index, we can determine if h["h index"] is equal to the counting variable used in a for loop that will iterate using the "lenght" value. Whenever, the "h" index is        equal to the counting variable, then we use stringstream to add the "h" index into an empty string called "lane". Whenever the "h" index does not equal the counting variable, then a "." is added to the string instead.

	The start() method will begin the race. This is where the user is asked and allowed to input a random seed. Then that inputed value will update the random seed. Inside a while keepGoing, a random number between 0 and 1 are generated and a for loop that iterates 5        times will then compare three things. First, if any of the horses has already reached the final slot of the track, which is the value for "lenght", and if this does happen then keepGoing is given a "false" value to end the while loop. Second, in case the race is         not over, then the program will check if the random number generated was a zero or a one. If zero, then the horse does not move, but the lane still needs to be printed, so the printTrack method is called and is given the current value of counting variable that is        being used for the for loop inside the while loop.

        If the random number was a one, then the Horse advance method is used and the printLane method is called again. 



	        

horseRace: horse.o race.o main.o
	g++ -g horse.o race.o main.o -o horseRace
horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp
race.o: race.cpp race.h horse.h
	g++ -g -c race.cpp
main.o: main.cpp race.h horse.h
	g++ -g -c main.cpp
clean:
	rm -f *.o
	rm horseRace
run: horseRace
	./horseRace
debug: horseRace
	gdb horseRace

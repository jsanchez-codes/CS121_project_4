#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	std::cout << "Horse Race Game " << std::endl;
	srand(time(NULL));

	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};

	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < TRACK_LENGTH; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				keepGoing = false;
			} else {
			std::cout << "Press enter for another turn " << std::endl;
		       	} // end else	
		} // end for
	} // end while

	return 0;
} // end main

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;
} // end advance

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		} else {
			std::cout << ".";
		} // end if
	} // end for loop
	// print a newline
	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] >= TRACK_LENGTH){
	std::cout << "HORSE " <<  horseNum << " WINS!" << std::endl;
	} // end if
	return false;
} // end isWinner


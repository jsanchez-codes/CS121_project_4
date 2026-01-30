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

	bool keepGoing = TRUE;
	while (keepGoing){
		for (int i = 0; i < TRACK_LENGTH; i++){
			advance(0, horses);
			printLane(0, horses);
			isWinner(0, horses);
				keepGoing = FALSE
			std::cout << "Press enter for another turn " << std::endl; 
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
	result = FALSE;
	if (horses[horseNum] >= TRACK_LENGTH){
		result = TRUE;
	std::cout << horses << "WINS!" << std::endl;
	} // end if
} // end isWinner


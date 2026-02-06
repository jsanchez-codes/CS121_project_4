#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int main(){
	std::cout << "Horse Race Game " << std::endl;
	srand(time(NULL));

	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				keepGoing = false;
		       	} // end if	
		} // end for
		std::cout << "Press ENTER for another turn";
    		std::cin.ignore();
	} // end while

	return 0;
} // end main

void advance(int horseNum, int* horses){
	int coin = dist(rd);
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
	bool result = false;
	if (horses[horseNum] >= TRACK_LENGTH){
		bool winner = true;
		std::cout << "HORSE " <<  horseNum << " WINS!" << std::endl;
		result = true;
	} // end if
	return result;
} // end isWinner


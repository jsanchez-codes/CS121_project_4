#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* jorses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	std::cout << "Horse Race Game " << std::endl;
	srand(time(NULL));

	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};


	return 0;
} // end main



# CS121_project_4
(lab) procedural horse race

Algorithm for Project 4

#documentation for horse race game
```
#include <iostream>
//standard library for input and output
#include <cstdlib>
//C standard library
#include <ctime>
//collection of date and time functions


```
## function protos
```
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses;
bool isWinner(int horseNum, int* horses);

constant int NUM_HORSES
constant int TRACK_LENGTH

```
## main function
```
main(){
set up randomization
set up horses array
5 zeros

set keepGoing to true
while loop to manage entire game
while keepGoing:
    go through all the horses (for loop)
    for each horse:
        advance that horse
        print a lane for that horse
        if that horse wins:
            set keepGoing to false (get out of game)
        prompt for next turn

```
## advance function
```
given horseNum and horse array
roll a zero or one -> coin
add coin to that hors's position value

```
## printLane function
```
given horseNum and horse array
for loop from 0 to TRACK_LENGTH -> i
    if i == current horse position:
        print horseNum
    otherwise:
        print a dot

```
## isWinner function
```
given horseNum and horse array
result = false
if this horse's position += TRACK_LENGTH:
    result = true
    print horseNum is the winner
return result

```
    return 0;
} // end main


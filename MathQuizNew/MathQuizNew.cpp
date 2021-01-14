/* 
Math Quiz
This is a terminal based Mathematics quiz game that asks multiple choice questions and you have to get atleast
3/5 questions correct for each quiz to move one.
Jahres D. Peter
Date amended: 09/12/2020
Version 1
C++14
*/
#include "Level.h"
#include "Functions.h"


int main()
{
	Level level = Level(1); // Creating level object

    level.levelcheck(); // Running function
}
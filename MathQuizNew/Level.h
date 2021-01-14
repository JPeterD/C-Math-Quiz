#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "Functions.h"

using namespace std;

extern int clevel;

class Level {

	std::ifstream ofile;

public:
	//Constructer of level
	Level(int level);

	//Method to go through the individual level
	void OLevel();

	//Method to verify current level and redo if not passed
	void levelcheck();
	
	//Method to verify if level is passed.
	void verifyScore(int scorecheck);
};
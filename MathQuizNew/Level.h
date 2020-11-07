#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

extern int clevel;

class Level {
public:
	ifstream ofile;
	
	//Constructer of level
	Level(int level);

	// Function to go through the individual level
	void OLevel();

	//Function to verify current level and redo if not passed
	void levelcheck();
};
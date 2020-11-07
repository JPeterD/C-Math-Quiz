/*#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <level.h>

using namespace std;
int choice = 1;

int menuscreen() {
	cout << "Choose your level!\n\n";
	switch (choice) {
	case 1:
		cout << "0) Quit\n";
		cout << "1) Level 1\n";
		break;
	case 2:
		cout << "0) Quit";
		cout << "1) Level 1";
		cout << "2) Level 2";
		break;
	}
	cout << "Your choice: ";
	cin >> choice;
	return choice;
}*/
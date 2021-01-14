#include "Level.h"

int clevel = 1;
//Constructor to open the chosen level path
Level::Level(int level) {
	switch (level) {
	case 1:
		ofile.open("Level1Q.txt");
		break;
	case 2:
		ofile.open("Level2Q.txt");
		break;
	case 3:
		ofile.open("Level3Q.txt");
		break;
	case 4:
		ofile.open("Level4Q.txt");
		break;
	}
}
// Function to go through the individual level
void Level::OLevel() {
	string question, cans, ans2, ans3, ans4, yourans;

	//Checks if the file can be opened or doesnt exist at all.
	if (!ofile) {
		cerr << "Error! Please check your file paths. This level file cannot be found/opened!";
		exit(EXIT_FAILURE);
	}

	// Keep track of score
	int score = 0;

	cout << "Welcome to level " << clevel;
	cout << "\n\n";

	// Keep track of question number
	int qcount = 1;

	// Loop to go through the question txt file
	while (getline(ofile, question, '|')
		&& getline(ofile, cans, '|')
		&& getline(ofile, ans2, '|')
		&& getline(ofile, ans3, '|')
		&& getline(ofile, ans4, '|')) {

		//Declaring and initializing vector with the 4 different answers.
		vector<string> answers;
		answers.push_back(cans);
		answers.push_back(ans2);
		answers.push_back(ans3);
		answers.push_back(ans4);

		cout << "Question " << qcount << ") " << question << "\n";

		//Calling function to randomize and display answers
		scrambleVector(answers);

		cout << "\n\nWhat is your answer?\nAnswer: ";
		// Reads in users answer
		cin >> yourans;

		// Verifies that the answer is the correct one and adds 10 points
		if (yourans == cans) {
			cout << "\nCorrect answer!\n\n";
			score += 10;
		}
		else {
			cout << "\nThat was incorrect! :(\n\n";
		}
		qcount++; // Question number goes up 1
	}
	// After loop ends checks if score is above pass mark
	verifyScore(score);
}

//Function to verify current level and redo if not passed
void Level::levelcheck() {
	// Creates current level object
	Level level = Level(clevel);

	switch (clevel) {
	case 1:
	case 2:
	case 3:
	case 4:
		level.OLevel();
		level.levelcheck();
		break;
	case 5:
		completion(clevel);
		break;
	}
}

//Method to verify if score is enough to pass
void Level::verifyScore(int scorecheck) {
	if (scorecheck > 29) {
		cout << "You have completed the level with a score of: " << scorecheck;
		cout << "\nCongratulations you have passed level " << clevel << "!\n\n";
		// Creates a line of '-' characters
		cout << setfill('-') << setw(50) << "-" << setfill(' ') << endl;

		// Goes up one level
		clevel++;
	}
	else if (scorecheck < 30) {
		cout << "Not enough correct answers. Please re-do the level.\n\n";
	}
}
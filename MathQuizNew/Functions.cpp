#include "Functions.h"

void scrambleVector(vector<string> list1)
{
	// This creates a seed based on your current system time
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

	//Generates pseudo random numbers using your time as a seed.
	auto rng = std::default_random_engine{ seed };

	//Shuffles elements from the beginning to the end using rng.
	std::shuffle(list1.begin(), list1.end(), rng);

	//Loop to print out the shuffled answers
	for (int i = 0; i < list1.size(); i++) {
		cout << "#)" << list1[i] << "\n";
	}
}

//Function prints statements once quiz is completed
void completion(int curlevel)
{
	if (curlevel == 5) {
		cout << "Congratualations you have finished this Math Quiz well done to you!\n\n";
		cout << "You deserve a round of applause!\n";
	}
}
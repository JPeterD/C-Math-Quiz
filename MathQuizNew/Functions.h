#pragma once
#include "Level.h"
#include <algorithm>
#include <random>
#include <chrono>

//Declares function that scrambles vector
void scrambleVector(std::vector<std::string> list1);

//Prints msg on quiz completion
void completion(int curlevel);
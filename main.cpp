#include <iostream>
#include <string>
#include <random>

using namespace std;

int generateRandomNumber(int lower_bound, int upper_bound) {
    // Use a random device to seed the generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Create a distribution in the range [lower_bound, upper_bound]
    std::uniform_int_distribution<> distr(lower_bound, upper_bound);

    // Generate and return a random number
    return distr(gen);
}

int main()
{
    const int handi_x = generateRandomNumber(4, 7);
    const int handi_y = generateRandomNumber(7, 10);

    string rows[10] = {"_____","_____","_____","_____","_____","_____","_____","_____","_____",};

    return 0;
}
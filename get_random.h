#include <random>

int generateRandomNumber(int lower_bound, int upper_bound) {
    // Use a random device to seed the generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Create a distribution in the range [lower_bound, upper_bound]
    std::uniform_int_distribution<> distr(lower_bound, upper_bound);

    // Generate and return a random number
    return distr(gen);
}
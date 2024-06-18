#include <iostream>
#include <string>
#include <random>
#include <array> // Include the array library

using namespace std;

int generateRandomNumber(int lower_bound, int upper_bound)
{
    // Use a random device to seed the generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Create a distribution in the range [lower_bound, upper_bound]
    std::uniform_int_distribution<> distr(lower_bound, upper_bound);

    // Generate and return a random number
    return distr(gen);
}

void printMatrix(const array<string, 10>& rows) // Use std::array and pass by const reference
{
    for (const auto& row : rows)
    {
        cout << row << endl;
    }
}

array<string, 10> initRows() // Return a std::array instead of a raw array
{
    array<string, 10> rows;

    for (int i = 0; i < 10; i++)
    {
        rows[i] = "_________";
    }

    return rows;
}

int main()
{
    const int handi_x = generateRandomNumber(4, 7);
    const int handi_y = generateRandomNumber(7, 10);

    auto rows = initRows(); // Fix missing semicolon

    // Optionally print the generated random numbers
    cout << "Handi_x: " << handi_x << endl;
    cout << "Handi_y: " << handi_y << endl;

    // Print the matrix
    printMatrix(rows);

    return 0;
}
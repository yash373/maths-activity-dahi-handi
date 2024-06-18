#include <iostream>
#include <vector>

void simulateTreeRingGrowth(double initialThickness, double growthRate, int numYears) {
    std::vector<double> ringThicknesses(numYears);
    ringThicknesses[0] = initialThickness;

    std::cout << "Simulating tree ring growth for " << numYears << " years\n";

    // Calculate ring thicknesses based on AP
    for (int i = 1; i < numYears; ++i) {
        ringThicknesses[i] = ringThicknesses[i - 1] + growthRate;
    }

    // Display results
    for (int i = 0; i < numYears; ++i) {
        std::cout << "Year " << (i + 1) << ": Thickness = " << ringThicknesses[i] << " mm\n";
    }
}

int main() {
    double initialThickness, growthRate;
    int numYears;

    std::cout << "Enter initial ring thickness (mm): ";
    std::cin >> initialThickness;

    std::cout << "Enter growth rate per year (mm): ";
    std::cin >> growthRate;

    std::cout << "Enter number of years to simulate: ";
    std::cin >> numYears;

    simulateTreeRingGrowth(initialThickness, growthRate, numYears);

    return 0;
}

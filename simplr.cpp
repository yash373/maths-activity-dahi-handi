#include <iostream>

using namespace std;

int main() {
    // declaring vars
    int numYears;
    double initialThickness, growthRate;

    // taking inputs
    cout << "Enter initial ring thickness (mm): ";
    cin >> initialThickness;

    cout << "Enter growth rate per year (mm): ";
    cin >> growthRate;

    cout << "Enter number of years to simulate: ";
    cin >> numYears;

    // displaying results
    cout << "Simulating tree ring growth for " << numYears << " years\n";

    for (int i = 0; i < numYears; i++){
        cout << "Year " << i+1 << ": Thickness = " << initialThickness + (i+1-1)*growthRate << "\n";
    }

    return 0;
}
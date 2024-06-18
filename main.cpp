#include <iostream>
#include <cstdlib>
#include "get_random.h"

using namespace std;

int main(){
    const int handi_row = generateRandomNumber(5,10);

    cout << handi_row;
    return 0;
}
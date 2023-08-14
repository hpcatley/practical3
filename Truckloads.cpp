#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates <= loadSize) {
        return 1;
    }
    else {
        return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + numCrates%2, loadSize);
}


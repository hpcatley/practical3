#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates <= loadSize) {
        return loadSize;
    }
    else {
        numTrucks(numCrates/2, loadSize);
    }

}
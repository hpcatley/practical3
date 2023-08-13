#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates <= loadSize) {
        return 1;
    }
    else {
        numTrucks(numCrates/2, loadSize);
    }

}
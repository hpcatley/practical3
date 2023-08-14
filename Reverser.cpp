// Implementing a class called Reserver which has two recursive functions: reverseDigit and reverseString
// reverseDigit takes a non-negative int value and reverses the digits using recursion. The "reversed" int is then returned.
// reverseString takes in a std::string and returns the reversed string in a recursive way.

#include <string>
#include <iostream>
#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    
    if (value<0) {
        return -1;
    }
    else if (value <= 10) {
        return value;
    }
    else {
        std::cout << value%10;
        return reverseDigit(value/10);
    }
}

std::string Reverser::reverseString(std::string characters) {
    if(characters.size()==0) {
        return "ERROR";
    }
    else if(characters.size()<=1) {
        return characters;
    }
    else { 
        return reverseString(characters.substr(1, characters.size()))+characters[0];

    }
}

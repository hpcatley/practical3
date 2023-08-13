// Implementing a class called Reserver which has two recursive functions: reverseDigit and reverseString
// reverseDigit takes a non-negative int value and reverses the digits using recursion. The "reversed" int is then returned.
// reverseString takes in a std::string and returns the reversed string in a recursive way.

#include <string>

int reverseDigit(int value) {
    // base case
    if (value<=1) {
        return 1;
    }
    else {
        reverseDigit(value/10);
    }
}

#include <iostream>

void printFavoriteNumber() {
    int number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> number;
    std::cout << "Amazing!! That's my favoirite number too" << std::endl;
    std::cout << "No! really!! " << number << " is my favorite number!" << std::endl;
}

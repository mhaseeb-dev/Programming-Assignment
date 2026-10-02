#include <iostream>

int main() {
    int choice;

    std::cout << " Weather Condition Program \n";
    std::cout << "1. Sunny\n";
    std::cout << "2. Rainy\n";
    std::cout << "3. Cloudy\n";
    std::cout << "4. Snowy\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "\nIt's sunny! Don't forget your sunglasses and sunscreen.\n";
            break;
            
        case 2:
            std::cout << "\nIt's rainy! Grab an umbrella and wear waterproof shoes.\n";
            break;
            
        case 3:
            std::cout << "\nIt's cloudy! It looks like a great, mild day for a walk.\n";
            break;
            
        case 4:
            std::cout << "\nIt's snowy! Time to build a snowman and bundle up in a heavy coat.\n";
            break;
            
        default:
            std::cout << "\nInvalid choice! Please enter a number between 1 and 4.\n";
            break;
    }

    return 0;
}

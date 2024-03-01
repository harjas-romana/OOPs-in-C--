#include <iostream>
#include <cstdlib>  
#include <ctime>     

int main() {
    srand(time(0));

    int lowerBound, upperBound;
    char playAgain = 'y';

    do {
        std::cout << "Welcome to the Guess the Number game!" << std::endl;
        std::cout << "Enter the lower bound of the range: ";
        std::cin >> lowerBound;
        std::cout << "Enter the upper bound of the range: ";
        std::cin >> upperBound;

        int randomNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
        int guess;
        int attempts = 0;

        std::cout << "I have a number between " << lowerBound << " and " << upperBound << ". Can you guess my number?" << std::endl;

        do {
            std::cout << "Attempt #" << attempts + 1 << ": Please type your guess: ";
            std::cin >> guess;

            if (guess == randomNumber) {
                std::cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts + 1 << " attempts!" << std::endl;
                break;
            } else if (guess < randomNumber) {
                std::cout << "Too low. Try again." << std::endl;
            } else {
                std::cout << "Too high. Try again." << std::endl;
            }

            attempts++;

            // Provide a hint after a certain number of attempts
            if (attempts == 3) {
                int midpoint = (lowerBound + upperBound) / 2;
                if (randomNumber < midpoint) {
                    std::cout << "Hint: The number is closer to the lower bound." << std::endl;
                } else {
                    std::cout << "Hint: The number is closer to the upper bound." << std::endl;
                }
            }
        } while (true);

        std::cout << "Would you like to play again? (y or n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y');

    std::cout << "Thanks for playing! Goodbye." << std::endl;

    return 0;
}

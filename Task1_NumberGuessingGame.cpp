// Task 1 - CodSoft Internship
// Developer: Ketan Mahesh Joshi
// Program: Number Guessing Game (Range: 1 to 50)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 50
    int targetNumber = rand() % 50 + 1;
    int userGuess;
    int attempts = 0;

    cout << "🎮 Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number (between 1 and 50):" << endl;

    // Game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}

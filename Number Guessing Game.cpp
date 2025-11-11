#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int numberToGuess = rand() % 100 + 1;
    int playerGuess = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    while (playerGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> playerGuess;

        if (playerGuess > numberToGuess) {
            cout << "Too high! ";
            if (playerGuess - numberToGuess <= 5) {
                cout << "You're close!";
            }
            cout << " Try again." << endl;
        } else if (playerGuess < numberToGuess) {
            cout << "Too low! ";
            if (numberToGuess - playerGuess <= 5) {
                cout << "You're close!";
            }
            cout << " Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number!" << endl;
        }
    }

    return 0;
}

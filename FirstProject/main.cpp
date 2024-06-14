#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

using namespace std;

class NumberGuessingGame {
   private:
      int secretNumber;
      int maxGuesses;
      int currentGuess;

   public:
      NumberGuessingGame(int maxGuesses) {
         this->maxGuesses = maxGuesses;
         srand(time(0));
         secretNumber = rand() % 100 + 1;
         currentGuess = 0;
      }

      void play() {
         int guess;
         bool guessedCorrectly = false;

         cout << "Guess the number!" << endl;
         cout << "Between 1 and 100." << endl;

         while (currentGuess < maxGuesses && !guessedCorrectly) {
            cout << "Enter your guess (" << (maxGuesses - currentGuess) << " guesses left): ";
            cin >> guess;


            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid number!" << endl;
                continue;
            }

            currentGuess++;

            if (guess < secretNumber) {
               cout << "Too low!" << endl;
            } else if (guess > secretNumber) {
               cout << "Too high!" << endl;
            } else {
               cout << "Congratulations! You've guessed the number in " << currentGuess << " tries." << endl;
               guessedCorrectly = true;
            }
         }

         if (!guessedCorrectly) {
            cout << "Sorry, you've used all your guesses. The number was " << secretNumber << "." << endl;
         }
      }

};

int main() {
   NumberGuessingGame game(5);
   game.play();
   return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I picked a number between 1 and 100!" << endl;

    while (true) {
        cout << "Your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secret)
            cout << "Too low! Try again." << endl;
        else if (guess > secret)
            cout << "Too high! Try again." << endl;
        else {
            cout << "Correct! You got it in " << attempts << " attempts!" << endl;
            break;
        }
    }

    return 0;
}

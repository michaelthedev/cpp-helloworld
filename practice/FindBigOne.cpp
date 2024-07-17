/**
 * Find big one with a little twist
 *
 * @author Michael A. <michael@logad.net>
 */

#include <iostream>

using namespace std;

int FindBigOne(const int number1, const int number2) {
    if (number1 > number2) {
        return number1;
    }

    return number2;
}

void GetTwoNumbers(int* numbers)
{
    cout << "Please enter 2 numbers \n";

    cin >> numbers[0] >> numbers[1];
}

int main() {
    int streak = 1;

    while (true) {
        int numbers[2];
        GetTwoNumbers(numbers);

        if (numbers[0] == numbers[1]) {
            cout << "You can't trick me G. I'm built different \n";
        } else {
            const int biggerOne = FindBigOne(numbers[0], numbers[1]);
            cout << "Nice try, the bigger one is: " << biggerOne << "\n";
        }

        // streak
        if (streak % 3 == 0) {
            printf("I am on a winning streak haha. %d times in a row!\n", streak);
        }

        char response;
        cout << "\nDo you want to try again? (y/n)\n";
        cin >> response;

        if (response != 'y' && response != 'Y') {
            break;
        }

        streak++;
    }

    return 0;
}
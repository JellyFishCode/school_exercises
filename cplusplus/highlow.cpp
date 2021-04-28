#include <iostream>
#include <cmath>
using namespace std;
int main()
{

/* __________________________________________________________________
Play a game together: One of the two people chooses a number between 0 and 100. 
The other person is not allowed to see the number.
The other person must now guess this number. 
To do this, the other person guesses what the number might be. 
The person who wrote down the number now comments on the second person's guess with one of the following three statements, 
depending on the guess:
- too high 
- too low
- correct!
Try to represent this game in a C++ program.
__________________________________________________________________ */
	int right;
	int guess;
	cout << "The right number is: \n";
	cin >> right;
	cout << "Guess a number between 0 and 100\n";

	
	do
	{
		cin >> guess;	
		
	if (guess <= 100 && guess >= 0){
		if(right == guess){
			cout << "You guessed correctly!\n";
		}
		else if(right > guess){
			cout << "The number is higher than you've guessed!\n";
		}
		else{
			cout << "The number is lower than you've guessed!\n";
		}
	}
	else{
		cout << "Enter a Number between 0 and 100";
	}
	} while(guess != right);

	return 0;
}

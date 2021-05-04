#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//	----------------------------------------------------------------------------------------
/*	Dice
	
	Cast a dice 6 times. 
	After each cast, request the user for an input.
	Output the points and add them to the sum, also output the indermediate result.
	Add a condition where the input value needs to be between 1 and 6.
	If the input value is wrong, restart the program.
	In this exercise you don't need to check for the datatype of the input.
	At the end output the sum. */
//	----------------------------------------------------------------------------------------
	
	
	int cast;
	int total;
	
	cout << "Cast the dice 6 times and input the number here!\n";
	for (int counter = 0; counter <= 5; counter++)
	{
		cin >> cast;
		if(cast < 1 || cast > 6)
		{
			cout << "Wrong input!\n";
			return main();
		}
		if(counter == 5){
			total = cast + total;
			cout << "Sum: " << total << endl;
		}
		else{
			total = cast + total;
			cout << "Subtotal: " << total << endl;
		}
	}
	return 0;
}
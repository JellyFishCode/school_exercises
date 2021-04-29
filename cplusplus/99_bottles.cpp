//  _________________ 99 Bottles ____________________
/* There's a song called "99 Bottles of beer...".
It contains 100 strophes which is constructed like so:
	99 bottles of beer on the wall
	99 bottles of beer
	you take one down an pass it around
	98 of beer

	98 bottles of beer on the wall
	98 bottles of beer
	you take one down an pass it around
	97 bottles of beer
	[...]
	1 bottle of beer on the wall
	1 bottle of beer
	you take one down an pass it around
	0 bottles of beer

	go to the store and buy some more
	99 bottles of beer

The goal here is to output 99 strophe using
the "for loop". The last strophe sounds a lil different.
*/
// ___________________________________________________



#include <iostream>
using namespace std;

int main()
{
// 99 Bottles of Beer
	for (int i = 99; i >= 2; i--){
		if(i == 2){
				cout << "2 bottles of beer on the wall\n";
				cout << "2 bottles of beer\n";
				cout << "you take one down an pass it around\n";
				cout << "1 bottle of beer\n\n";
				
				cout << "1 bottle of beer on the wall\n";
				cout << "1 bottle of beer\n";
				cout << "you take one down an pass it around\n";
				cout << "0 bottles of beer\n\n";
				
				cout << "go to the store and buy some more\n";
				cout << "99 bottles of beer";
		}
		else{
			cout << i << " bottles of beer on the wall\n";
			cout << i << " bottles of beer\n";
			cout << "you take one down an pass it around\n";
			cout << i - 1 << " bottles of beer\n\n";
		}
	}	
	return 0;
}


// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// variables
	int length;
	char symbol;
	int xCord;
	int yCord;
	
	// asking for input
	
	cout << "Please enter line length: ";
	cin >> length;
	
	cout << "Please enter line symbol:";
	cin >> symbol;
	
	cout << "Please enter line x coordinate:";
	cin >> xCord;
	
	cout << "Please enter line y coordinate:";
	cin >> yCord;

	// proccessing the input = output on the screen
	gotoxy(xCord,yCord);
//	for(starting number; end number ; counting sequence)
	int i;
	for(i = 0;i < length;i++) 
	{
		gotoxy(xCord + i,yCord + i);
		cout << symbol;	
	}
	

}
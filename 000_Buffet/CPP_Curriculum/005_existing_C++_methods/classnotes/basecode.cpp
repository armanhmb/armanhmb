// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL)); 
	gotoxy(3,5);
	cout << '@';
	gotoxy(3+1,5);
	cout << 'R';
	gotoxy(3+2,5);
	cout << 'M';
	gotoxy(3+3,5);
	cout << 'A';
	gotoxy(3+4,5);
	cout << 'N';

	gotoxy(3,5+1);
	cout << 'n';
	gotoxy(3,5+2);
	cout << 'd';
	gotoxy(3,5+3);
	cout << 'r';
	gotoxy(3,5+4);
	cout << 'e';
	gotoxy(3,5+5);
	cout << 'w';
	
	for (int i = 0; i < 6; i++){
		gotoxy(3+i,5+i);
		cout << 'N';
		
	}
}


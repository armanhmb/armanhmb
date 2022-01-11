// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	int length;
	char symbol;
	int xCord;
	int yCord;



	cout << "Please enter box width:";
	cin >> width; 
	
	cout << "Please enter border char:";
	cin >> Char;
	
	cout << "Please enter box height:";
	cin >> height;
	
	cout << "Please enter box x coordinate:";
	cin >> xCord 
	
	cout << "Please enter box y coordinate:";
	cin >> yCord 
	
	gotoxy(xCord,yCord);
	
		int i;
	for(i = 0;i < length;i++) 
	{
		gotoxy(xCord + i,yCord + i);
		cout << symbol;
	

	}


}

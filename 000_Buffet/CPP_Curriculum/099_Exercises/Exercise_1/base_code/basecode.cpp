// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<< ("Counting from 5-25")<<endl;
	int x = 5;
	while(true) 
	{
		cout<< x<<endl;
		if(x == 25)
		{
			break;
		}
	
	
	
		x = x + 1;
		
	}
	cout<< ("Counting from 15-5")<<endl;
	x = 15;
	while(true) 
	{
		cout<< x <<endl;
		if(x == 5)
		{
			break;
		}
	
	
	
		x = x - 1;
		
	}
	


	for(int i = 5; i <= 25; i = i + 1 ){
		cout << i << endl;	
	}





	for(int i = 15; i >= 5; i = i - 1 ){
		cout << i << endl;	

	}
	
	


	for(int i = 123; i <= 200; i = i + 2 ){
		cout << i << endl;	
	}




	for(int i = 1253; i >= 55; i = i - 7 ){
		cout << i << endl;	
	}


}


///////////////////////////////////////////////////////////////////////


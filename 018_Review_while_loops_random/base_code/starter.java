import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
int x;
int y;
int z;
Random rand; // Constructing rand
rand=new Random(); // Declare

x = 5;      // Declaring x 
x = rand.nextInt(46); // 0-45
System.out.print(x);

//  5 - 50
x = rand.nextInt(46) + 5; // 0-45
						  // 5-50
// 10-65
// 65-10 = 56 
x = rand.nextInt(56);  // 0 - 55
					   // 10 - 65
x = x + 1;
System.out.println(x);

double a; 
a = 0; 
a = rand.nextDouble(); // 0 - 1, not 1 
System.out.println(a); 
					   // 12.5 - 13.5
a = a + 12.5; 
System.out.println(a);



		double b; 
b = 35.3; 
b = rand.nextDouble(); // 0 - 1, not 1 					   // 35.3 - 36.3
b = b + 35.3; 
System.out.println(b);
// double between 5 -  fccdxdsw2
	}
}

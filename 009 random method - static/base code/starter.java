import java.util.Scanner;
import java.util.Random;

class starter {
public static void main(String args[]) {
int x;
Random rand;
rand = new Random();
x = 9;
x = rand.nextInt(10);
System.out.println(x);

int y;
rand = new Random();
y = 100;
y = rand.nextInt(100)+1;
System.out.println(y);

double a;
a=0;
a=rand.nextDouble();
a = a + 2.5;
System.out.println(a);

double b;
b=rand.nextInt(575);
b = b + 14;
b=b + rand.nextDouble();
System.out.println(b);


}
}
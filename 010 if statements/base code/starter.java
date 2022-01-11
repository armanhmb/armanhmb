import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
    System.out.println("do you play games");
    String game = sc.nextLine();
    int x = sc.nextInt();
    String a1 = new String ("no");
    String a2 = new String ("yes");
    boolean z = game==a2;
    if (z) 
    {
        System.out.println ("What games do you play"); 
        
    }
	}
}

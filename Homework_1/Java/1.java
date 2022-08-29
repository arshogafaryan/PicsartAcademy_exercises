import java.util.Scanner;
class Max{
	public static void main(String[] args)
	{
		Scanner a = new Scanner(System.in);
		int x = a.nextInt();
		Scanner b = new Scanner(System.in);
		int y = b.nextInt();
		Scanner c = new Scanner(System.in);
		int z = c.nextInt();
		if (x >= y && x >= z)
			System.out.println("Maximum is: " + x);
		else if (y >= z && y >= x)
			System.out.println("Maximum is: " + y);
		else
			System.out.println("Maximum is: " + z);
		a.close();
		b.close();
		c.close();
		}
}

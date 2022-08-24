import java.util.Scanner;
class Min{
    public static void main(String[] args)
    {
        Scanner a = new Scanner(System.in);
		int x = a.nextInt();
		Scanner b = new Scanner(System.in);
		int y = b.nextInt();
		Scanner c = new Scanner(System.in);
		int z = c.nextInt();
		if (x <= y && x <= z)
			System.out.println("Minimum is: " + x);
		else if (y <= z && y <= x)
			System.out.println("Minimum is: " + y);
		else
			System.out.println("Minimum is: " +z);
        a.close();
        b.close();
        c.close();
        }
}

import java.util.Scanner;
class Cal{
    public static void main(String[] args)
    {
        System.out.printf("Enter a value: ");
        Scanner a = new Scanner(System.in);
		int x = a.nextInt();
        System.out.printf("Enter an operation: ");
		Scanner b = new Scanner(System.in);
		char y = b.next().charAt(0);
        System.out.printf("Enter a value: ");
		Scanner c = new Scanner(System.in);
		int z = c.nextInt();
		if (y == '+')
			System.out.println(x + z);
        else if (y == '-')
			System.out.println(x - z);
		else if (y == '*')
            System.out.println(x * z);
        else if (y == '/')
            System.out.println(x / z);
        else if (y == '%')
            System.out.println(x % z);
        else
            System.out.println("Unknown operation");
        a.close();
        b.close();
        c.close();
        }
}
import java.util.Scanner;
class Swap{
	public static void main(String[] args)
	{
		Scanner a = new Scanner(System.in);
        int x = a.nextInt();
		Scanner b = new Scanner(System.in);
		int y = b.nextInt();
        int temp = x;
        x = y;
        y = temp;
        System.out.printf("Swapped x and y: %d, %d",x ,y);
        a.close();
        b.close();
    }
}
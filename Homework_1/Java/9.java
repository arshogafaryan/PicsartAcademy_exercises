import java.util.Scanner;
class DigSum{
    public static void main(String[] args)
    {
        Scanner a = new Scanner(System.in);
        int x = a.nextInt();
        int sum = 0;
        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        System.out.printf("Sum of digits: %d", sum);
        a.close();
    }
}
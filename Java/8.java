import java.util.Scanner;
class Dig{
    public static void main(String[] args)
    {
        Scanner a = new Scanner(System.in);
        int x = a.nextInt();

        int sum = 1;
        int y = x;
        while (x / 10 != 0)
        {
            sum *= 10;
            x = x / 10;
        }
    
        while (sum != 0)
        {
            System.out.printf("%d, ", y / sum);
            y %= sum;
            sum /= 10;
        }
        a.close();
    }
}
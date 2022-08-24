import java.util.Scanner;
class MinZ{
    public static void main(String[] args)
    {
        Scanner a = new Scanner(System.in);
		int x = a.nextInt();
		Scanner b = new Scanner(System.in);
		int y = b.nextInt();
		Scanner c = new Scanner(System.in);
		int z = c.nextInt();
        Scanner d = new Scanner(System.in);
        int k = d.nextInt();
        if (x + y + z + k == 0)
        {
		    if (x <= y && x <= z && x <= k)
		    	System.out.println("Minimum is: " + x);
	    	else if (y <= z && y <= x && y <= k)
	    		System.out.println("Minimum is: " + y);
	    	else if (z <= x && z <= y && z <= k)
	    		System.out.println("Minimum is: " + z);
            else
                System.out.println("Minimum is: " + k);
        }
        a.close();
        b.close();
        c.close();
        d.close();
        }
}
class Triangle{
	public static void main(String[] args)
	{
        int space, rows = 3;

        for(int i = 1, k = 0; i <= rows; ++i, k = 0)
        {
            System.out.println();
            for(space = 1; space <= rows-i; ++space)
            {
                System.out.printf(" ");
            }

            while(k != 2*i-1)
            {
                System.out.printf("*");
                ++k;
            }
        }
    }
}
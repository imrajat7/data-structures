import java.util.Scanner;

class PowerofFour
{
	static void isPowerOfFour(int n) 
    { 
        int count = 0; 
        int x = n & (n - 1);       
        if ( n > 0 && x == 0) 
        { 
            while(n > 1) 
            { 
                n >>= 1; 
                count += 1; 
            }  
            if(count % 2 == 0)
            {
            	System.out.println("Yes");
            } 
            else
            {
            	System.out.println("No");
            }
        }         
        System.out.println("No");
    }

	public static void main(String[] args) 
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter a number = ");
		int n = obj.nextInt();
		isPowerOfFour(n);
	}
}
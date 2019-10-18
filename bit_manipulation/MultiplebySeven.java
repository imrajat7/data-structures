import java.util.Scanner;

class MultiplebySeven
{
	public static void CheckMultiply(int n)
	{
		int temp = n,result;
		for(int i=0;i<3;i++)
		{
			n = n<<1;
		}
		result = n-temp;
		System.out.println(result);
		
	}

	public static void main(String[] args) 
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter a number = ");
		int n = obj.nextInt();
		CheckMultiply(n);
	}
}
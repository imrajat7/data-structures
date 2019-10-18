import java.util.Scanner;

class PowerofTwo
{
	public static void CheckPower(int n)
	{
		int count = 0;
		count = (n & (n-1));
		if(count!=0)
		{
			System.out.println("Not A Power");
		}
		else
		{
			System.out.println("Yes");
		}
		
	}

	public static void main(String[] args) 
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter a number = ");
		int n = obj.nextInt();
		CheckPower(n);
	}
}
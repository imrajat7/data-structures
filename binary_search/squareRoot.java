import java.util.Scanner;

class squareRoot
{
	public static float squareRootofNo(int no,int precision)
	{
		int s=1,e=no/2;
		double ans = 0.0;
		while(s<=e)
		{
			int m = (e+s)/2;
			if(m*m == no)
			{
				ans = m;
				break;
			}
			if(m*m > no)
			{
				e = m-1;
			}
			else
			{
				s = m+1;
				ans = m;
			}
		}

		double increment = 0.1;
		for(int i=0;i<precision;i++)
		{
			while(ans*ans <= no)
			{
				ans += increment;
			}
			ans = (ans - increment);
			increment = increment/10;
		}
		return (float)ans;
	}

	public static void main(String[] args) 
	{
		
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter Number");
		int no = obj.nextInt();
		System.out.println("Enter Precision");
		int precision = obj.nextInt();
		System.out.println(squareRootofNo(no,precision));
	}
	
}
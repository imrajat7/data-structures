/* This algorithm is used for finding prime number ina  given range */

import java.util.Scanner;

class SieveOfEratosthenes
{
	public static void sieveOferatosthenes(int no)
	{
		boolean arr[] = new boolean[no+1];
		for(int i=0;i<no;i++)
		{
			arr[i] = true;
		}
		for(int i=2;i*i<=no;i++)
		{
			if(arr[i] == true)
			{
				for(int j=i*i;j<=no;j += i)
				{
					arr[j] = false;
				}
			}
		}
		for(int i=2;i<no;i++)
		{
			if(arr[i] == true)
			{
				System.out.println(i);
			}
		}
	}

	public static void main(String[] args) 
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter No till u want Prime Numbers : ");
		int n = obj.nextInt();
		sieveOferatosthenes(n);	
	}
}

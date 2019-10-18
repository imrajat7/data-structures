import java.util.Scanner;

class BinarySearchRecursive
{
	public static int binarySearch(int[] arr,int s,int e,int n)
	{
		if(s<=e)
		{
			int m = (s+e)/2;
			if(arr[m] == n)
				return m;
			else if(arr[m] > n)
				return binarySearch(arr,s,m-1,n);
			else
				return binarySearch(arr,m+1,e,n);
		}
		return -1;
	}

	public static void main(String[] args) 
	{
		int[] arr = new int[5];
		Scanner obj = new Scanner(System.in);
		for(int i=0;i<5;i++)
		{
			System.out.println("Enter No to Array = ");
			arr[i] = obj.nextInt();
		}	
		System.out.println("Enter No to Search = ");
		int n = obj.nextInt();
		System.out.println(binarySearch(arr,0,5,n));
	}
	
}
class KmpAlgo
{
	public static void KmpSearch(String text,String pattern)
	{
		int l1 = text.length();
		int l2 = pattern.length();

		int lps[] = new int[l2];
		commputeLPS(pattern,l2,lps);

		int i=0,j=0;
		// i is for text and j for pattern
		while(i<l1)
		{
			if(pattern.charAt(j) == text.charAt(i))
			{
				i++;
				j++;
			}
			if(j==l2)
			{
				int no = i-j;
				System.out.println("String found at index " + no);
				j = lps[j-1];
			}
			else if(i<l1 && pattern.charAt(j) != text.charAt(i))
			{
				if(j!=0)
				{
					j = lps[j-1];
				}
				else
				{
					i++;
				}
			}

		}
	}

	public static void commputeLPS(String pattern,int l2,int lps[])
	{
		lps[0] = 0;
		int i=1,len=0;
		while(i<l2)
		{
			if(pattern.charAt(i) == pattern.charAt(len))
			{
				len++;
				lps[i] = len;
				i++;
			}
			else
			{
				if(len!=0)
				{
					len = lps[len-1];
				}
				else
				{
					lps[i] = len;
					i++;
				}
			}
		}
	}

	public static void main(String[] args) 
	{
		String text = "ABABDABACDABABCABAB";
		String pattern = "ABABCABAB";
		KmpSearch(text,pattern);
	}
}
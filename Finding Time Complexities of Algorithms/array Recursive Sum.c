int RSum(int a[], int n) 
{
    count++;
	if (n < 0) 
	{
	    count++;
		return 0;
	} 
	else 
	{
	    count++;
		return RSum(a, n - 1) + a[n];
	}
	count++;
	count++;
}

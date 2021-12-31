int Sum(int a[], int n)
{
	int s, i;
	s = 0;
	count++;
	for (i = 0; i < n; i++)
	{
	    count++;
		s = s + a[i];
		count++;
	}
	count++;
    	count++;
	return s;
}

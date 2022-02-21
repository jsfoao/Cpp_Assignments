int abs(int a)
{
	if (a < 0)
	{
		return a / -1;
	}
	return a;
}

int abs_difference(int a, int b)
{
	if (a > 0 && b > 0) 
	{
		return abs(abs(a) - abs(b));
	}
	if (a < 0 && b < 0)
	{
		return abs(abs(a) - abs(b));
	}
	return abs(a) + abs(b);
}
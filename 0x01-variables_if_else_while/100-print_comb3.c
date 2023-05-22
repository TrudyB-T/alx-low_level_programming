int main(void)
{
        int n;
        int y;

        for (n = 0; n < 10; ++n)
	{
		putchar(n + 48);
		for (y = 0; y < 10; ++y)
		{
			putchar(y + 48);
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}


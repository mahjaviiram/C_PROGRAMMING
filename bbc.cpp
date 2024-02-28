// C program to show use
// of break and continue
#include <stdio.h>

// Driver code
int main()
{
for (int i = 1; i <= 10; i++)
{
	if (i == 3)
	{
	continue;
	}
	if (i == 6)
	{
	break;
	}
	printf("%d ", i);
}
return 0;
}


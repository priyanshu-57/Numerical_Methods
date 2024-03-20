// evaluate

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#define f(x) 3 * x - cos(x) - 1
#define fd(x) sin(x)
int main()
{
	SetConsoleTitle("Priyanshu Kushawaha ");

	printf("// Newton-Rapson Method \n\n\n");

	float x0, x1, f0, f1, fd, e = 0.001, E;
	int step = 1, N = 20;

	printf("Enter iniatial gueses:\n");
	scanf("%f", &x0);

	//	printf("\n step \t\t x0 \t\t f(x0) \t\t fd(x0) \t\t x1 \t\t E \n");
	do
	{
		fd = fd(x0);
		f0 = f(x0);

		if (fd == 0.0)
		{
			printf("\n mathmatical error \n");
			exit(0);
		}

		x1 = x1;
		step = step + 1;
		if (step > N)
		{
			printf("\n not convergent \n");
			exit(0);
		}
	} while (E > e);
	printf("\n Root is: %4f,x1");
	return 0;
}

// 3 secant method

#include<stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>
#include<windows.h>
#define f(x) pow (x,5)+pow(x,3)+5

int main() {
	SetConsoleTitle("Priyanshu Kushawaha ");
	
	printf("// Secant Method \n\n\n");
	
    float x0, x1, x2, f0, f1, f2, e = 0.001, E;
    int step = 1, N=40;

    printf("Enter two initial guesses:\n");
    scanf("%f %f", &x0, &x1);

    
    printf("step \t  x0 \t\t   f(x0) \t   x1 \t\t f(x1) \t\t  x2 \t        f(x2) \t     E  \n");
    do {
        
        f0 = f(x0);
        f1 = f(x1);
        
        if(f0==f1){
        	printf("Mathmatically error !");
        	exit(0);
		}
        x2=(f1 * x0 - f2 * x1)/(f1 - f0);
        f2= f(x2);
        E=fabs(x2 - x1)/x2;
        printf(" %d\t%4f\t%4f\t%4f\t%4f\t%4f\t%4f\t \n",step,x0,f0,x1,f1,x2,f2,E);
        
        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;
        step= step+1;
        if(step>N){
        	printf("Not convergent");
        	exit(0);
		}
    } while (E > e);

    printf("\nRoot is: %f\n", x0);
    return 0;
}

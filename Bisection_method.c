//Bisection method

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <windows.h>

float f(float x) {
    return pow(x - 3, 2); // Define your function here
}

int main() {
    float x0, x1, x2, f0, f1, f2, e = 0.001, E;
    int iteration = 1;
    
    //SetConsoleTitle("Anushesh K. K. Tharu");
    
    printf("// Bisection Method \n\n\n");

    printf("Enter two initial guesses:\n");
    scanf("%f %f", &x1, &x2);

    f1 = f(x1);
    f2 = f(x2);

    if (f1 * f2 > 0.0) {
        printf("Incorrect initial guesses:\n");
        exit(0);
    }

    printf("Iteration \t x1 \t\t f(x1) \t\t x2 \t\t f(x2) \t\t x0 \t\t f(x0) \t\t E \n");
    do {
        x0 = (x1 + x2) / 2;
        f0 = f(x0);
        E = fabs(x2 - x1) / 2;
        printf("%d \t      %f \t      %f \t     %f \t      %f \t     %f \t      %f \t     %f \n",
               iteration, x1, f1, x2, f2, x0, f0, E);

        if (f0 * f1 < 0) {
            x2 = x0;
            f2 = f0;
        } else {
            x1 = x0;
            f1 = f0;
        }
        iteration++;
    } while (E > e);

    printf("\nRoot is: %f\n", x0);
    return 0;
}


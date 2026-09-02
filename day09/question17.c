//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Two distinct real roots: %.2f and %.2f", root1, root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);

        printf("Two equal real roots: %.2f", root1);
    }
    else
    {
        printf("Two complex roots");
    }

    return 0;
}

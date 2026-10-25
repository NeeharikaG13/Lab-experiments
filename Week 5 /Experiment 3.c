#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("\n Enter a,b and c of quadratic equation");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    { 
        printf("\n Roots are real numbers");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\n Roots are %.2f, %.2f", r1, r2);
        
    }
    else if(d==0)
    { 
        printf("\n Roots are equal");
        r1 = -b/(2*a);
        printf("\n Roots are %.2f",r1);
        
    }    
    else 
    {
        printf("Roots are complex");
    }

    return 0;
}

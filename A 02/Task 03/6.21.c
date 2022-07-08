// EXAMPLE 6.21 Repeated Compound Interest Calculations with Error Trapping

#include <stdio.h>
#include <math.h>
main ()
{
    float p, r, n, i,f ;
    /* read initial value for the principal */
    printf("Please enter a value for the principal (P) ");
    printf("\n(To end program, enter 0 for the principal): ");
    scanf ("%f", &p) ;
    if (p < 0)
    {
        printf("\nERROR - Please try again: ");
        scanf ("%f", &p);
    }
    while (p > 0)   /* main loop */
    {
        /* read remaining input data */
        printf("\nPlease enter a value for the interest rate (r): ");
        scanf ("%f", &r) ;
        if (r < 0)
        {
            printf("\nERROR - Please try again: ");
            scanf ("%f", &r);
        }
        printf("\nPlease enter a value for the number of years (n): ");
        scanf ("%f", &n) ;
        if (n < 0)
        {
            printf("\nERROR - Please try again: ");
            scanf ("%f", &n) ;
        }
        /* calculate i,then f */
        i = r/100;
        f = p * pow((1 + i), n);
        /* display the output */
        printf ("\nThe final value (F) is: %.2f\n", f) ;
        /* read principal for next pass */
        printf("\n\nPlease enter a value for the principal (P) ");
        printf("\n(To end program, enter 0 for the principal): ");
        scanf ("%f", &p) ;
        if(p < 0)
        {
            printf("\nERROR - Please try again: ");
            scanf ("%f", &p) ;
        }
    } /* end while loop */
}

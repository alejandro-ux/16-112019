#include <conio.h>
#include <stdio.h>

int main()
{
    int a, b, c;

    printf( "\n   Introduzca el primer n%cmero (entero): ", 163 );
    scanf( "%d", &a );
    printf( "\n   Introduzca el segundo n%cmero (entero): ", 163 );
    scanf( "%d", &b );
    printf( "\n   Introduzca el tercer n%cmero (entero): ", 163 );
    scanf( "%d", &c );

    if ( a >= b && a >= c )
        printf( "\n el numero mayor es: %d .", a );
    else

        if ( b > c )
            printf( "\n  el numero mayor es: %d .", b );
        else
            printf( "\n  el numero mayor es: %d .", c );
 
    getch();

    return 0;
}

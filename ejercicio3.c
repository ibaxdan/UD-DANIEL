#include <stdio.h>
int main()
{
    float base, altura, area, perimetro ;
    printf ("ingresar el valor de la altura") ;
    scanf ("%f",&altura) ;
    printf ("ingresar el valor de la base") ;
    scanf ("%f",&base) ;
    perimetro = 2 * (base + altura) ;
    base = base * altura ;
    printf ("el valor del  perimetro es %.2f y el valor del area es %.2f", perimetro, base) ;
    return 0 ;
}
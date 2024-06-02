#include <stdio.h>
int main()
{
    //definir datos de entrada
    float salarioanterior, incremento, nuevosalario ;
    printf ("ingrese el salario anterior: ");
    scanf ("%f",&salarioanterior);

    //calculo del nuevo salario
    incremento = salarioanterior * 0.25 ;
    nuevosalario = incremento + salarioanterior;

    //datos de salida
    printf ("el incremento es: %.2f", incremento) ;
    printf ("el nuevo salario es; %.2f", nuevosalario);


    return 0 ;
}
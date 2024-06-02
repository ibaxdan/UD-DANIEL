#include <stdio.h>

int main() {
    // Definir datos de entrada
    float nota1, nota2, nota3, notaexamen, notatrabajo, promedionotas ;
    float valorexamen, valortrabajo, calificacionfinal ;

    // Leer los datos de entrada
    printf("Ingresar la nota 1: ");
    scanf("%f", &nota1);
    
    printf("Ingresar la nota 2: ");
    scanf("%f", &nota2);
    
    printf("Ingresar la nota 3: ");
    scanf("%f", &nota3);
    
    printf("Ingresar la nota del examen: ");
    scanf("%f", &notaexamen);
    
    printf("Ingresar la nota del trabajo: ");
    scanf("%f", &notatrabajo);

    // Calculo del valor de cada una de los datos requeridos
    promedionotas = (nota1 + nota2 + nota3) / 3 * 0.55 ;
    valorexamen= notaexamen * 0.30 ;
    valortrabajo= notatrabajo * 0.15 ;
    calificacionfinal = promedionotas + valorexamen + valortrabajo;

    // Datos de salida
    printf("El promedio de las notas es: %.2f\n", promedionotas);
    printf("El valor del examen es: %.2f\n", valorexamen);
    printf("El valor de la nota del trabajo es: %.2f\n", valortrabajo);
    printf("La calificacion final es: %.2f\n", calificacionfinal);

    return 0;
}

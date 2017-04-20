#include <stdio.h>
#include <stdlib.h>
//Funcion basic que realiza las operaciones aritmeticas basicas determinando cual realizar desde un switch que contiene el simbolo del operador.
float basic(char operador, float a, float b);
/*{
  switch (operador) {
    case '+': return (a+b);
              break;
    case '-': return (a-b);
              break;
    case '*': return (a*b);
              break;
    case '/': return (a/b);
              break;
            }
          }*/

int main(int argc, char const *argv[]) {
  //Confimarcion de que te todos los valores han sido proporcionados [valor 1 operador valor 2]
  if (argc !=4) {
    printf("ERROR!! se requieren datos con la forma (valor 1 | operador | valor 2) \n operadores admitidos( + | - | * | / )\n");
  }else{
    //impresion del Resultado atraves de la funcion basic que recibe los valores desde la linea de ordenes
      printf("El resultado de %s %s %s: %.2f\n Bye bye... \n",argv[1],argv[2],argv[3], basic(*argv[2], atoi(argv[1]), atoi(argv[3])));
  }
  return 0;
}

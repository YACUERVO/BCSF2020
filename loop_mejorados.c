#include <stdio.h>
#include <cs50.h>

void ImprimirPollito (int CantidadPollitos);

int main (void){

    int respuesta = get_int("cuantos pollitos?\n");
    ImprimirPollito(respuesta);



   }

  void ImprimirPollitos(int CantidadPollitos){
     for (int i= 0; i<CantidadPollitos; i++ ){

  printf ("pollitos\n");

}
}
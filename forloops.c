#include <stdio.h>
#include <cs50.h>

int main (void){
    
    int PollitosCreados = 0;
    int NumeroDePollitos = get_int("Cuantos pollitos quieres?  ");
    
    
   while(PollitosCreados < NumeroDePollitos) {
    printf ("pollito! %i\n", PollitosCreados);
    PollitosCreados++;
    
   }
    
}
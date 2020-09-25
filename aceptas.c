#include <stdio.h>
#include <cs50.h>


int main (void){
    
    //Preguntar al usaurio si acepta los terminos y condiciones
    
   char respuesta = ' ';
   
   
    while (respuesta != 'S' || respuesta != 's'){
        
        respuesta = get_char ("Aceptas los terminos y condiciones? \n  "); 
    
    if (respuesta == 'S' || respuesta == 's') {
        
        printf ("usuario acepto.");
        
    } else if (respuesta == 'N' || respuesta == 'n'){
        
        printf("uaurio no acepto.");
    }else {
        
        printf ("no hemos reonocido la respuesta");
    }
}
}
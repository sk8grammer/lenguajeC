#include <stdio.h>


main(){

char letras[100];

printf("ingrese caracteres\n");
gets(letras);   //GET() y PUTS() son entrada y salida de secuencias de caracteres//

printf("el array de caracteres es:");
puts(letras);

size_t longitud = strlen(letras);               //calcula longitud del array
printf("y contiene %d", longitud);printf(" caracteres\n");

return 0;
}



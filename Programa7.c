#include <stdio.h>
int main(void) 
{
  int n;
  printf("Ingresa un numero entero: ");
  scanf("%d", &n);
  if (n > 100) 
  { 
    printf("El numero %d es mayor que 100.\n", n);
  }
  return 0;
}

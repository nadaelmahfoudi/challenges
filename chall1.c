#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()

{
  int i, a, prod ;
  printf("veuillez entrez un nombre : \n ");
  scanf ("%d",&a);
  for (int i = 0; i <= 10; i++) {
    prod = a*i;
    printf("%d = %d * %d \n", prod, i, a );
}
  

    return 0;
}

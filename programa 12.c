#include <stdio.h>
 
int main()
{
  int k, i, j;
  char opcion;
 
  printf("Introduce el n�mero de filas que tendr� la pir�mide: ");
  scanf("%i",&k);
  getchar();
 
  printf("\n");
  for(i=1;i<=k;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%i ",j);
    }
    printf("\n");
  }
 
  printf("\n");
  printf("�Quieres construir otra pir�mide?(S/n): ");
  scanf("%c",&opcion);
  getchar();
  if(opcion=='s' || opcion=='S')
  {
    main();
  }
 
  return 0;
}

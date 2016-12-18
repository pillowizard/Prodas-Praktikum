#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  
  for (i = 0; i < 5; i++) {
      if (i % 2 == 1) {
         printf("%i ", i);
      }
  }
  system("PAUSE");	
  return 0;
}

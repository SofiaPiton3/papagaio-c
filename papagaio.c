#include <stdio.h>

void main(int argc, char *argv[])
{
  if(argc == 1)
  {
     printf("Você não digitou nada");
     exit(0);
  }
  else
  {
    printf("Você digitou %s\n", argv[1]);
  }
  printf("Criado por:Sofia Araújon Piton");
}
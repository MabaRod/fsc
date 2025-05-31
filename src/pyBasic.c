#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/pyBasic.h"

void pyfiles (const char *proyectName){
  // here the main proyect placeholder its not a mere folder. its a virtual envierement on python
  char comando[100];
  snprintf(comando, sizeof(comando), " python3 -m venv %s", proyectName);
  system(comando);
  char activate[100]; 
  snprintf(activate, sizeof(activate), "source %s/bin/activate ", proyectName);
  
  chdir(proyectName);
  FILE *fp = fopen("main.py", "w");
  if (fp == NULL){
    perror("Error creating file");
    printf("error creating file\n");
 
  }
  system("ls -l");
  printf("Done\n");
}

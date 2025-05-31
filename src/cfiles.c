#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/cfiles.h"



void cfiles (const char *proyectName){
    mkdir(proyectName,0777);
    chdir(proyectName);
    mkdir("src", 0777);
    mkdir("include", 0777);
     FILE *fp = fopen("Makefile", "w");
   if (fp == NULL){
    perror("Error creating file");
    printf("error creating file\n");
      return;
  }
     FILE *fp1 = fopen("Main.c", "w");
   if (fp1 == NULL){
    perror("Error creating file");
    printf("error creating file\n");
      return;
  }
    system("ls -l");
    printf("proyect created\n");
}

void cppfiles (const char *proyectName){
    mkdir(proyectName,0777);
    chdir(proyectName);
    mkdir("src", 0777);
  
    mkdir("include", 0777);
     FILE *fp = fopen("Makefile", "w");
   if (fp == NULL){
    perror("Error creating file");
    printf("error creating file\n");
      return;
  }
     FILE *fp1 = fopen("main.cpp", "w");
   if (fp1 == NULL){
    perror("Error creating file");
    printf("error creating file\n");
      return;
  }
    system("ls -l");
    printf("proyect created\n");
}

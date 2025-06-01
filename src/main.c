#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "../include/web.h"
#include "../include/pyBasic.h"
#include "../include/node.h"
#include "../include/cfiles.h"

int main(int argc, char *argv[])
{
  // int size = 50;
  char proyect[100];// Just to shut op the compiler
  char type[10]; //just to shut op the compiler
  if (argc < 2)
  {

    printf("Wrong usage\n");
    printf("./fsc-dev type\n");
    printf("Please read documentation on the github site\n");
    return 2;
  }

  if (strcmp(argv[1], "ccpp") == 0)
  {
    printf("What is the name of the proyect?\n");
    scanf("%s", proyect);
    printf("We working on c or c++\n");
    scanf("%s", type);
    if (strcmp(type, "c") == 0)
    {
      cfiles(proyect);
      return 0;
    }
    else if (strcmp(type, "cpp") == 0)
    {
      cppfiles(proyect);
    }
    else
    {
      printf("Wrong usage check documentation\n");
    }
  }

  if (strcmp(argv[1], "web") == 0)
  {

    printf("What is the name of the proyect?\n");
    scanf("%s", proyect);
    webfiles(proyect);
    return 0;
  }
  else if (strcmp(argv[1], "node") == 0)
  {
    printf("What is the name of the proyect?\n");
    scanf("%s", proyect);
    char yn[sizeof(char)];
  printf("You selected the node version\n");
  printf("You have to have installed NodeJS and NPM on your system\n");
  printf("Do you have them installed? (Y/n)\n");
  scanf("%s99",yn);
  if (strcmp(yn, "n")==0){
    printf("Please install requiered packages\n");
    printf("NodeJS\n");
    printf("npm\n");
       } else if (strcmp(yn, "y")==0){
      nodefiles(proyect);
    } }
  else if (strcmp(argv[1], "py") == 0)
  {
    printf("What is the name of the proyect?\n");
    scanf("%s", proyect);
    pyfiles(proyect);
    return 0;
  }
}

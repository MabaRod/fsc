#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/node.h"

void nodefiles(const char *proyectName){
    mkdir(proyectName,0777);
    chdir(proyectName);
    FILE *fp = fopen("server.js", "w");
    if (fp == NULL){
      perror("Error creating server file\n");

  } 

    fprintf(fp, 
        "const http = require('http')\n"
        "const hostname  = '127.0.0.1'\n"
        "const port = 8080\n"
        "const server = http.createServer((req, res) => {\n"
        "     res.statusCode = 200; \n"
        " res.setHeader('Content-Type', 'text/plain');\n"
        "res.end('Hello, World!')\n"
        "});\n"
        "\n"
        "server.listen(port, hostname, () => {\n"
        "console.log(`Server running at http://${hostname}:${port}/`);\n"
        "});\n");
  fclose(fp);
  system("npm init -y");
}
 


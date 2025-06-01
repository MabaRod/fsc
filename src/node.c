#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/node.h"

void nodefiles(const char *proyectName)
{
  mkdir(proyectName, 0777);
  chdir(proyectName);
  FILE *fp = fopen("server.js", "w");
  if (fp == NULL)
  {
    perror("Error creating server file\n");
    return;
  }
  fprintf(fp,
          "const express = require(\"express\");\n"
          "const app = express();\n"
          "const port = 2506;\n"
          "\n"
          "app.use(function middle(req, res, next) {\n"
          "  console.log(`${req.method} ${req.path} - ${req.ip}`);\n"
          "  next();\n"
          "});\n"
          "\n"
          "app.get(\"/\", function send(req, res) {\n"
          "  res.sendFile(__dirname + \"/public/main.html\");\n"
          "});\n"
          "\n"
          "app.use(express.static(__dirname + \"/public\"));\n"
          "\n"
          "app.use(\"/public\", express.static(__dirname + \"/public\"));\n"
          "\n"
          "app.listen(port, () => {\n"
          "  console.log(\"Port listening on port 2506\");\n"
          "});\n");
  fclose(fp);
  mkdir("public", 0777);
  chdir("public");
  FILE *fp1 = fopen("main.html", "w");
  if (fp1 == NULL)
  {
    perror("Error creating main.html file\n");
    return;
  }
  fprintf(fp1,
          "<!DOCTYPE html>\n"
          "<html lang=\"en\">\n"
          "<head>\n"
          "  <meta charset=\"UTF-8\">\n"
          "  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
          "  <title>Node.js Project</title>\n"
          "</head>\n"
          "<body>\n"
          "  <h1>Welcome to the Node.js Project</h1>\n"
          "  <p>This is a simple Node.js application using Express.</p>\n"
          "</body>\n"
          "</html>\n");
  fclose(fp1);
  chdir("..");
  system("npm init -y");
  system("npm install express");
}

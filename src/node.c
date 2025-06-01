#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/node.h"

// ...existing code...
void nodefiles(const char *proyectName){
    mkdir(proyectName,0777);
    chdir(proyectName);
    FILE *fp = fopen("server.js", "w");
    if (fp == NULL){
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
"});\n"
    );
    fclose(fp);
    system("npm init -y");
    system("npm install express"); 
}
// ...existing code...// ...existing code...
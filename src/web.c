#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/web.h"



void webfiles (const char *proyectName){
    mkdir(proyectName,0777);
    chdir(proyectName);
    mkdir("src", 0777);
     FILE *fp = fopen("index.html", "w");
    if (fp == NULL) {
        perror("Error creating index.html");
        return;
    }

    // Basic HTML content
    fprintf(fp,
        "<!DOCTYPE html>\n"
        "<html lang=\"en\">\n"
        "<head>\n"
        "    <link href= ""src=syle.css"" rel=""stylesheet"">"
        "    <meta charset=\"UTF-8\">\n"
        "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
        "    <title>My Project</title>\n"
                   "</head>\n"
        "<body>\n"
        "    <h1>Welcome to My Project</h1>\n"
        "    <p>This page was generated automatically by a C program.</p>\n"
        "</body>\n"
        "</html>\n"
    );

    fclose(fp);
 printf("index.html created successfully.\n");  
    chdir("src");
    FILE *fp1 = fopen("main.js", "w");

    if (fp1 == NULL) {
        perror("Error creating index.html");
        return;
    }
    fclose(fp1);
    printf("JS file created\n");
   FILE *fp2 = fopen("syle.css", "w");

    if (fp1 == NULL) {
        perror("Error creating index.html");
        return;
    } fprintf(fp2,
        "        body { font-family: Arial, sans-serif; margin: 40px; background: #f9f9f9; }\n"
        "        h1 { color: #333; }\n"
        "        p { color: #555; }\n"
 );
    fclose(fp2);
    printf("style.css created successfully.\n");   
    printf("proyect created\n");
system("ls -l");
}

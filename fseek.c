#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
static void usage(char *argv[]) {
  fprintf(stderr, "usage: %s path\n", argv[0]);
  exit(1);
}
int main(int argc, char *argv[])
{

    char file[] = "fseek_data.txt";
    //open file in read mode
        FILE * fp = fopen(file, "r"); 
    // print error if file not present
        if (fp == NULL)
        printf("Can't open %s for reading.\n", file);
        char c; 
    // split with space and print each word
        while((c = fgetc(fp)) != EOF) 
        { 
                if(c == ' ' || c == '\n') 
                { 
                        printf("\n"); 
                } 
                else 
                { 
                        printf("%c", c); 
                } 
        } 
    //close file pointer
        fclose(fp);  
        return 0; 
}

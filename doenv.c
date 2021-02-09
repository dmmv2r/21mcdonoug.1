

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {

   printf("hey\n");
   int opt;

   while ((opt = getopt(argc, argv, "hi:")) != -1) {
      switch(opt) {
         case'h':
            printf("Usage: \n");
            return -1;
         case 'i':
            printf("i entered\n");
            break;
         default:
            printf("Default usage: \n");
            return -1;
      }
   }

   printf("past getopt\n");
   return 0;
}

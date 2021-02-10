

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {

   int opt;

   while ((opt = getopt(argc, argv, "hi")) != -1) {
      switch(opt) {
         case'h':
            printf("Usage: Type ./doenv to run\n");
            return -1;
         case 'i':
            printf("i entered\n");
            //setenv();
            break;
         default:
            printf("Default usage: \n");
            return -1;
      }
   }

   if(argc == 1) {
      printf("%s\n", getenv("PATH"));
      return 0;
   }

   int i;
   for (i = 0; i < argc; i++) {
      if (strcmp(argv[i], "utility") == 0) {
         system("env");
      }
   }

   return 0;
}

#include <stdio.h>

int main() {
   char input[1000];

   printf("Enter text to input: ");
   fgets(input, 1000, stdin);

   FILE *fp;
   fp = fopen("output.txt", "w");
   fprintf(fp, "%s", input);
   fclose(fp);

   printf("Information written to file.\n");

   return 0;
}


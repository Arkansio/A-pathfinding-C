#include <functions.h>

int     loadMap(const char **path)
{
   FILE *fp;
   int c;

   fp = fopen(*path,"r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break;
      }
      printf("%c", c); 
   }
   fclose(fp);
   return(0);
}
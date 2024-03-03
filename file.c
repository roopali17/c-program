#include <stdio.h>
#include <conio.h>
void main( )
{
  FILE *fp;
  char ch;
  fp = fopen ("testl.txt","w");
  if (fp == NULL)
 {
   printf (" \n Can not open file");
   exit( 1);
 }
  printf (" \n Type a line of text and press Enter key \n");
  while ( (ch = getche( ) ) != ' \ r')
     fputc (ch, fp);
 fclose (fp);
}

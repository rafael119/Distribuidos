#include <stdio.h>
#include <string.h>

int main()
{
   char s[11] = "Hola amigos";
   char c = 'a';

   printf( "s=%s\t", s );
   printf( "c=%c\n", c );
   printf( "strchr=%s\n", strchr( s, c ) );

   return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
   char s[23] = "HolaI amigos P ja IPN jaja N";
   char c = 'I';

   printf( "s=%s\t", s );
   printf( "c=%c\n", c );
   printf( "strchr=%s\n", strchr( s, c ) );

   return 0;
}

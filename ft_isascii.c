#include <stdio.h>
 
int   ft_isascii(int c)
{
   if (c >= 0 && c <= 127)
      return 1;
   else
      return 0;
}
/*
int main(void)
{
   int ch;
 
   for (ch = 115; ch <= 0x82; ch++) {
      printf("%#04x    ", ch);
      if (isascii(ch))
         printf("The character is %c\n", ch);
      else
         printf("Cannot be represented by an ASCII character\n");
   }
   return 0;
}
   */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    int i;

    i = 0;
    if (!str)
        return NULL;
    while (str && n > i)
    {
        if (str == '\0')
            return NULL;
        else if (str++ == c)
            return (&str[i] - 1);
            i++;
    }
    return str;
}


#include <stdio.h>
#include <string.h>

int main() {
   const char str1[] = "abcdef";
   const char ch = 'd';

   char* result = (char*)ft_memchr(str1, ch, 4);

   if (result != NULL) {
       printf("'%c' found at position %ld\n", ch, result - str1);
   } else {
       printf("'%c' not found in the string\n", ch);
   }

   return 0;
}
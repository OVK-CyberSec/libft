#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const char *s = src;
    size_t i;

    i = 0;
    while (n > i)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

int main() {
    char src[] = "Bonjour, monde!";
    char dest[20];

    // Copier 16 octets de la source vers la destination
    ft_memcpy(dest, src, 16);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
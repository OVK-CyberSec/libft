#include <stdio.h> 
#include <string.h> 

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	unsigned char *dest = dest_str;
    const unsigned char *src = src_str;

	if (!dest_str && !src_str)
		return NULL;
	if (src < dest && dest < src + numBytes)
	{
		while (numBytes--)
			dest[numBytes] = src[numBytes];
	} 
	else 
	{
		while (numBytes--)
			*dest++ = *src++;
	}
		return dest_str;
}

int main()
{
	char dest_str[10] = "57";
	char src_str[10] = "Tut";

	//printf("%d\n", ft_strlen(src_str));
	puts("source string [src_str] before memmove:-"); 
	puts(dest_str); 

	/* Copies contents from source to destination */
	ft_memmove(dest_str, src_str, sizeof(src_str)); 

	puts("\nsource string [src_str] after memmove:-"); 
	puts(dest_str); 
	return 0; 
}
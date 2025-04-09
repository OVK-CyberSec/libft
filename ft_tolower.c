int ft_tolower(int ch)
{
    if (ch > 64 && ch < 91)
        ch += 32;
    return ch;
}
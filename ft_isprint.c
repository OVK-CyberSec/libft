int ft_isprint( int value )
{
    if (value >= 0 && value <= 31)
        return 0;
    return 1;
}
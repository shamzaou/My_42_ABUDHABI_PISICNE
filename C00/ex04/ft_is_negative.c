void    ft_is_negative(int n)
{
    char neg = 'N';
    char pos = 'P';

    if(n >= 0)
        write(1, &pos, 1);
    else
        write(1, &neg, 1);
}

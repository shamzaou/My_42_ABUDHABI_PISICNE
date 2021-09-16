void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_n(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
}

void ft_c_s(char a, char b, char c)
{
    if(a != '7' || b != '8' || c != '9')
    {
        write(1, ",", 1);
        write(1, " ", 1);
    }
}

void    ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';
    while(a <= '7')
    {
        while(b <= '8')
        {
            while(c <= '9')
            {
                ft_print_n(a, b, c);
                ft_c_s(a, b, c);
                c++;
            }
            b++;
            c = b + 1;
        }
        b = a + 1;
        a++;
    }
}
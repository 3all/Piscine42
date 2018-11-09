#include <string.h>

int nmatch(char *s1, char *s2);
void	ft_putnbr(int nb);

int main(void)
{
		
	ft_putnbr(nmatch("qwe", "q**"));
    ft_putnbr(nmatch("abcbd", "*b*"));


	return(0);
}


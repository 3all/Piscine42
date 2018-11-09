#include <string.h>

int match(char *s1, char *s2);

void ft_putnbr(int nb);

int main(void)
{
	char *s1 = "asdfghj";
	char *s2 = "*h*j";
	int b;

	b = match(s1, s2);

	ft_putnbr(match("qwe", "q*"));
	ft_putnbr(match("w", "*w*"));
	ft_putnbr(match("qwe", "*w*"));
	ft_putnbr(match("qwe", "*e"));
	ft_putnbr(match("qwe", "*e*"));
	ft_putnbr(match("qwe", "*q*e"));
	ft_putnbr(match("qwe", "*q*w*e*"));
	ft_putnbr(match("qwe", "qe*"));
	ft_putnbr(match("qwe", "w"));
	ft_putnbr(match("", ""));
	ft_putnbr(match("1", ""));
	ft_putnbr(match("", "1"));

	return (0);
}


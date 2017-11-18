#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, unsigned int n)
{
		unsigned int i;
		unsigned char *ptr;

		ptr = s;
		i = 0;
		while (i < n)
		{
				ptr[i] = '\0';
				i++;
		}
		return (s);
}

int	main(void)
{
		char str[100] = "academy+Moldova";
		char str1[10] = "123456789";
		char str2[7] = "7654321";

		
		ft_bzero(str1, 10);
		printf("str = %s", str1);
		return(0);
}


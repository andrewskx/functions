#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
		unsigned int i;
		unsigned char *ptr_dest;
		const unsigned char *ptr_src;

		ptr_dest = dest;
		ptr_src = src;
		i = 0;
		while (i < n)
		{
				ptr_dest[i] = ptr_src[i];
				i++;
		}
		return (dest);
}

int	main(void)
{
		char str[100] = "academy+moldova";
		char str1[10] = "123456789";
		char str3[3] = "ab";

		puts(str1);
		ft_memcpy(str1, str, 10);
		puts(str1);
		return (0);
}



#include "libft.h"
#include <stdio.h>

int main()
{
	const char *test = "test";

	printf("%d\n", ft_strlen(test));
	printf("%s", ft_strtrim("test", "t"));
}

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char set[] = "\t \n";

	int a = 15;

	printf("%s\n", ft_strtrim(s1, set));
	/*printf("%s\n", ft_split("test de la fonction", "a"));*/

	printf("CONVERSION : %s\n", ft_itoa(a);

	return (0);
}

#include "libft.h"

int		main(int argc, char **argv)
{
	ft_putstr("jbella\n");
/*
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);*/
(void)argc;
	char *str = argv[0];
	str[0]='a';
	return (0);
}

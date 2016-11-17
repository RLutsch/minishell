#include "21sh.h"

int     ft_export(char *pram)
{
    extern char	**environ;
    char        **tmp;
	int			i;
 
	i = 0;
 	i = ft_tablen(environ);
     tmp = ft_strsplit(pram, '=');
	while(--i)
	{
            if (ft_strncmp(tmp[0], environ[i], ft_strlen(tmp[0])) == 0)
        {
            printf("%s\n", "nice pram");
        //    free(envorin[i]);
         //   environ[i] = malloc(sizeof(char) * ft_strlen(pram)); 
            environ[i] = ft_strcpy(environ[i],pram);
            printf("%s\n",environ[i]);
            return (1);
        }
        else 
        {
         //   ft_realloc(*environ, sizeof(*environ+1));
         //   environ[ft_tablen(environ) + 1] = malloc(sizeof(pram));
         //   environ[ft_tablen(environ) +1] = ft_strcpy(environ[ft_tablen(environ) + 1],pram);
         //   return (1);
        }
	}
    return (0);
}
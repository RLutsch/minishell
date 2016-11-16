#include "21sh.h"

void ft_free2d(char **arg)
{
    while(**arg)
    {
        free(*arg);
        arg++;
    }

}

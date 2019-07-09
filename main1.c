
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

//1 file discriptor

int		main(int argc, char **argv)
{
    int		fd;
    int     i;
    char	*line;

    i = 1;
    (void)argc;
    while (argv[i])
    {
        fd = open(argv[i], O_RDONLY);
        while ((get_next_line(fd, &line) == 1))
        {
            printf("%s\n", line);
            if (line)
                ft_strdel(&line);
        }
        if (line)
            free(line);
        close(fd);
        i++;
    }
    return (0);
}

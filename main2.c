#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>

//two file discriptors

int		main(int argc, char **argv)
{
	int		fd;
	int		fd1;
	char	*line;

	if (argc == 1)
		fd = 0;
	if (argc == 3)
	{
		fd1 = open(argv[2], O_RDONLY);
		fd = open(argv[1], O_RDONLY);
	}
	if (fd == -1 || fd1 == -1)
		return (0);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
	}
	ft_strdel(&line);
	close(fd);
	while (get_next_line(fd1, &line) == 1)
	{
        ft_putendl(line);
	}
	ft_strdel(&line);
	close(fd1);
}


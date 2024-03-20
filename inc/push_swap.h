#ifndef PUSH_SWAP_H
    # define PUSH_SWAP_H

    # include "get_next_line.h"
    # include "libft.h"
    # include "ft_printf.h"

	typedef struct s_node
	{
		int 			*content;
		struct s_node 	*next;

	} 				t_node;

	int main(int argc, char **argv);
    void inc_to_str(int argc, char **argv, char *str);


#endif
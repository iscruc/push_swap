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

	typedef struct s_stack
	{
		int 			*temp;
		struct s_stack 	*next;

	} 				s_stack;

	int main(int argc, char **argv);
    void inc_to_str(int argc, char **argv, char *str);
	void	exit_error(void);
	int is_number(char *str);
	int check_integers(char *str);
	void	ft_num_max(long nbr);
	int errors_check(char **strs, char **argv, int i, int j);
	int ft_strcmp(char *str1, char *str2);
	int check_duplicates(int *str, int len);
	int ft_repeatednumbers(char **str, int pos);
	void ft_free(char  **str);



#endif
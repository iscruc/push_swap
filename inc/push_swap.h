#ifndef PUSH_SWAP_H
    # define PUSH_SWAP_H

    # include "get_next_line.h"
    # include "libft.h"
    # include "ft_printf.h"

	typedef struct s_node
	{
		long 			value;
		int 			index;
		int 			pos;
		int 			target_pos;
		int 			cost_a;
		int 			cost_b;
		struct s_node 	*next;
	} 				t_node;

	//init
	int main(int argc, char **argv);

	//checks
	int is_number(char *str);
	int check_integers(char *str);
	void	ft_num_max(long nbr);
	int errors_check(char **strs, char **argv, int i, int j);
	int ft_strcmp(char *str1, char *str2);
	int check_duplicates(int *str, int len);
	int ft_repeatednumbers(char **str, int pos);

	//utils
	void ft_free(char  **str);
	void ft_free_node(t_node *node);
	void	exit_error(void);
	void ft_free_stack(t_node **stack);


	//list init
	t_node *fill_stack(long *values, int size);
	void assign_index(t_node *stack, int stack_size);
	void print_stack(t_node *stack);

	//movements
	int list_is_sorted(t_node **stack);
	void ft_swap(t_node **stack);



#endif



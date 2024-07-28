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
	void assign_position(t_node *stack_a);
	void assign_target(t_node *stack_a, t_node *stack_b);
	int stack_size(t_node *stack);
	int find_closest_superior(t_node *stack_a, int b_index);
	int find_smallest_index_pos(t_node *stack_a);
	void excecute_sequence(t_node **stack_a, t_node **stack_b);


	//list init
	t_node *fill_stack(long *values, int size);
	t_node	*get_stack_bottom(t_node *stack);
	void assign_index(t_node *stack, int stack_size);
	void print_stack(t_node *stack);

	//movements
	int list_is_sorted(t_node **stack);
	void ft_swap_sa(t_node **stack);
	void ft_rotate(t_node **stack);
	void sort_three(t_node **stack);
	void ft_rrotate(t_node **stack);
	void ft_push(t_node **origin, t_node **dest);
	void sort_them_all(t_node **stack_a, t_node **stack_b);
	void make_pa(t_node **stack_a, t_node **stack_b);
	void make_pb(t_node **stack_b, t_node **stack_a);
	void make_ra(t_node **stack_a);
	void make_rb(t_node **stack_b);
	void make_rr(t_node **stack_a, t_node **stack_b);
	void make_rra(t_node **stack_a);
	void make_rrb(t_node **stack_b);
	void make_rrr(t_node **stack_a, t_node **stack_b);

	//algorithm
	void move_cheapest_node(t_node **stack_a, t_node **stack_b);
	void sort_a_extra(t_node *stack_a);

	//costs
	void calculate_costs(t_node *stack_a, t_node *stack_b);

#endif



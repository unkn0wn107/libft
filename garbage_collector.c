/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:07:18 by agaley            #+#    #+#             */
/*   Updated: 2023/05/10 21:45:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Initialize memory allocation stack anchor
 * @return t_trash_stack* or NULL if malloc fails
 */
t_trash_stack	*garb_stack_init(void)
{
	t_trash_stack	*stack;

	stack = malloc(sizeof(*stack));
	if (!stack)
		return (NULL);
	stack->head = NULL;
	return (stack);
}

/**
 * Adds an element to a memory allocation stack
 * @param stack pointer towards stack anchor
 * @param new_addr the address of the allocated item
 */
void	garb_stack_push(t_trash_stack *stack, void *new_addr)
{
	t_trash_node	*new;

	new = (t_trash_node *)malloc(sizeof(*new));
	if (stack == NULL || new == NULL)
	{
		ft_printf("Stacking error");
		return ;
	}
	new->addr = new_addr;
	new->next = stack->head;
	stack->head = new;
}

/**
 * Removes last element from a memory allocation stack
 * @param stack pointer towards stack anchor
 */
void	garb_stack_pop(t_trash_stack *stack)
{
	t_trash_node	*popped;
	void			*address_to_pop;

	if (stack == NULL)
	{
		ft_printf("Popping_error");
		return ;
	}
	else if (stack->head)
	{
		popped = NULL;
		popped = stack->head;
		address_to_pop = popped->addr;
		if (address_to_pop != NULL)
			free(address_to_pop);
		stack->head = popped->next;
		free(popped);
	}
}

/**
 * Frees a memory allocation stack and all elements in it
 * @param stack pointer towards stack anchor
 */
void	garb_stack_free(t_trash_stack *stack)
{
	while (stack && stack->head)
		garb_stack_pop(stack);
	free(stack);
}

/**
 * Malloc and adds element to a memory allocation stack
 * @param stack pointer towards stack anchor
 * @param size size_t to be allocated by malloc
 */
void	*garb_stack_collect(t_trash_stack *stack, size_t size)
{
	void	*addr;

	addr = malloc(size);
	if (!addr)
		return (NULL);
	garb_stack_push(stack, addr);
	return (addr);
}

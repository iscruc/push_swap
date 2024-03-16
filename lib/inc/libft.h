/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:51:04 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/16 19:15:53 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
/**
	* @brief Checks if a character is either an alphabetical 
	character (A-Z or a-z) or a decimal digit (0-9).
 *
 * @param c the character to check
 * @return Non-zero (true) if `str` is an alphanumeric character,
	0 (false) otherwise.
 */
int					ft_isalnum(int c);
/**
	* @brief The isalpha function is used to determine
	 whether a given character is an alphabetical character (A-Z or a-z).
 *
 * @param str the character to check
 * @return Non-zero (true) if `str` is an alphanumeric character,
	0 (false) otherwise.
 */
int					ft_isalpha(int str);
/**

	* @brief isascii verifies if a character is within 
	the ASCII character set (0 to 127).
 *
 * @param str the character to check
 * @return Non-zero (true) if `str` is an alphabetical character,
	0 (false) otherwise.
 */
int					ft_isascii(int str);
/**
 *
 * @brief isdigit checks if a character is a decimal digit (0-9).
 *
 * @param c the character to check
 * @return Non-zero (true) if `str` is a decimal digit, 0 (false) otherwise.
 */
int					ft_isdigit(int c);
/**

	* @brief The isprint function checks whether 
	a character is a printable character,
	i.e., it can be displayed on the screen.
 *
 * @param c the character to check
 * @return Non-zero (true) if `str` is a printable character,
	0 (false) otherwise.
 */
int					ft_isprint(int c);
/**
 * @brief sets a block of memory to a specific value.
 *
 * @param b A pointer to the memory to be filled
 * @param c The value to set (as an integer)
 * @param len The number of bytes to fill
 * @return A pointer to the memory area `b`
 */
void				*ft_memset(void *b, int c, size_t len);
/**
 * @brief Sets a block of memory to zero.
 *
 * @param s A pointer to the memory to be zeroed
 * @param n The number of bytes to zero
 */
void				ft_bzero(void *s, size_t n);
/**
 * @brief Copies a block of memory from one location to another by n size,
	allowing for efficient data duplication.
 *
 * @param dst pointer to the destination memory
 * @param src pointer to the source memory
 * @param n The number of bytes to copy
 * @return A pointer to the destination memory
 */
void				*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief Calculates the length of a null-terminated string.
 *
 * @param s input null-terminated string.
 * @return The length of the string (number of characters).
 */
size_t				ft_strlen(const char *s);
/**
	* @brief Converts an uppercase character to its 
	corresponding lowercase equivalent.
 *
 * @param c The character to be converted
 * @return (The lowercase equivalent of `c`, if applicable); otherwise,
	the original character `c`.
 */
int					ft_tolower(int c);
/**

	* @brief Converts a lowercase character to its 
	corresponding uppercase equivalent.
 *
 * @param c The character to be converted
 * @return (The uppercase equivalent of `c`, if applicable); otherwise,
	the original character `c`.
 */
int					ft_toupper(int c);
/**
 * @brief Copies a block of memory from one location to another,
	handling overlap.
 *
 * @param dst A pointer to the destination memory
 * @param src A pointer to the source memory
 * @param len The number of bytes to copy
 * @return A pointer to the destination memory.
 */
void				*ft_memmove(void *dst, const void *src, size_t len);
/**
	* @brief Safely copies a string into a destination 
	buffer with size limitation preventing overflows.
 *
 * @param dst The destination buffer
 * @param src The source string to copy
 * @param dstsize The maximum size of the destination buffer

	* @return The total length of the source string 
	(not including the null terminator).
 */
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief Safely concatenates two strings with size limitation.

 * @param dest The destination string.
 * @param src The source string to concatenate.
 * @param size The maximum size of the destination string.

	* @return total length of the resulting string 
	(not including the null terminator)
 */
size_t				ft_strlcat(char *dest, const char *src, size_t size);
/**
 * @brief Searches for the first occurrence of a specific character in a string.
 *
 * @param s The null-terminated string to search within
 * @param c The character to search for
 * @return pointer to the first occurrence of `c` in `s`, or NULL if not found.
 */
char				*ft_strchr(const char *s, int c);
/**
 * @brief Searches for the last occurrence of a specific character in a string.
 *
 * @param s The null-terminated string to search within
 * @param c The character to search for
 * @return pointer to the last occurrence of `c` in `s`, or NULL if not found
 */
char				*ft_strrchr(const char *s, int c);
/**

	* @brief Searches for the first occurrence of a specific byte in a memory block.
 *
 * @param s pointer to the memory block to search within
 * @param c byte to search for
 * @param n number of bytes to search
 * @return pointer to the first occurrence of `c` in the memory block,
	or NULL if not found
 */
void				*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief Compares two memory blocks up to a specified number of bytes.
 *
 * @param s1 pointer to the first memory block
 * @param s2 pointer to the second memory block
 * @param n number of bytes to compare
 * @return integer less than, equal to, or greater than zero,
	indicating the comparison result
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);
/**

	* @brief Searches for the first occurrence of a 
	substring in a string within a limited length.
 *
 * @param haystack null-terminated string to search within
 * @param needle null-terminated substring to search for
 * @param len maximum number of characters to search within `haystack`
 * @return pointer to the first occurrence of `needle` in `haystack`,
	or NULL if not found
 */
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
/**
 * @brief Converts a string to an integer.
 *
 * @param str The null-terminated string to convert.
 * @return The integer value represented by `str`.
 */
int					ft_atoi(const char *str);
/**
 * @brief Allocates and initializes a block of memory for an array of elements.
 *
 * @param count The number of elements to allocate space for.
 * @param size The size of each element in bytes.
 * @return A pointer to the allocated memory block, or NULL if allocation fails.
 */
void				*ft_calloc(size_t count, size_t size);
/**
 * @brief Duplicates a null-terminated string.
 *
 * @param s1 The null-terminated string to duplicate.
 * @return A pointer to the duplicated string, or NULL if allocation fails.
 */
char				*ft_strdup(const char *s1);
/**
 * @brief removes all characters `set` found in the `s1`.
 *
 * @param s1 string to be cutted
 * @param set characters to be deleted
 * @return cutted string `s1` with a malloc memory allocation
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);
/**
 * @brief it sends a character ´c´.
 *
 * @param c character to send
 * @param fd file descriptor to write
 */

char				**ft_split(char const *s, char c);

char				*ft_itoa(int n);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

t_list				*ft_lstnew(void *content);

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
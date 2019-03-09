/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 10:40:09 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/10 11:32:36 by rmarracc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MD5_H
# define MD5_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_md5
{
	size_t			size;
	unsigned int	x[16];
	unsigned int	stock[5];
	unsigned int	fonc[2];
	unsigned int	h[4];
	unsigned int	hset[4];
	unsigned int	*m;
}					t_md5;

void				ft_putchar(char c);
int					ft_strlen(char *s);
void				ft_putstr(char *str);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);

unsigned char		*ft_first_step(unsigned char *addr, size_t size);
void				ft_memory_line(void *octet, unsigned int rest, char *base);
int					ft_md5_resolve(char *str);
unsigned int		rotl(unsigned int x, unsigned int y);

#endif

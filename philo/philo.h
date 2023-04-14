/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:23:44 by amorilla          #+#    #+#             */
/*   Updated: 2023/04/14 20:38:00 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_data {
	int				n_philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				meals_required;
	pthread_mutex_t	mutex_write;
	pthread_mutex_t	mutex_eaten;
	int				eaten;
	pthread_mutex_t	mutex_dead;
	int				dead;
	int				start_time;
	t_list			*philos;
}	t_data;

typedef struct s_philo {
	pthread_t			thread;
	int					last_meal;
	int					meals_eaten;
	int					id;
	pthread_mutex_t		fork;
	pthread_mutex_t		mutex_meals;
	t_data				*data;
}	t_philo;






#endif

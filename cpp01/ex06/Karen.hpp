/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 06:47:01 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/12 03:28:03 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{

private:

	void	debug (void);
	void	info (void);
	void	warning (void);
	void	error (void);

public:

	Karen (void);
	~Karen (void);
	void	complain (std::string level);

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chorbo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:22:56 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/02 22:50:15 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHORBO_HPP
# define CHORBO_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <string.h>
# include "Contact.hpp"

class Agenda
{

private:

public:

	int		index;
	Contact	basca[8];

	Agenda(void);
	~Agenda(void);

	void	showall(void);
};

#endif

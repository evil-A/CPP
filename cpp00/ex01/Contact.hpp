/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:24:30 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/02 22:49:33 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{

private:

	int			index;
	std::string	name;
	std::string	lastname;
	std::string	nick;
	std::string	phone;
	std::string	secret;

public:

	Contact(void);
	Contact(int index, std::string name, std::string lastname, std::string nick, std::string phone, std::string secret);
	~Contact(void);

	void		setparams(int index);
	void		getparams(void);
	int			getindex(void);
	std::string	getname(void);
	std::string	getlastname(void);
	std::string	getnick(void);
};

#endif

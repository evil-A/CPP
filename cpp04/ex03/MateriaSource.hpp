/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:35:30 by evila-ro          #+#    #+#             */
/*   Updated: 2021/11/28 19:39:36 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria	*_materias[4];
		void		replace(MateriaSource const &src);

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		MateriaSource	&operator=(MateriaSource const &ass);
		IMateriaSource	&operator=(IMateriaSource const &ass);
		~MateriaSource(void);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);
};

#endif

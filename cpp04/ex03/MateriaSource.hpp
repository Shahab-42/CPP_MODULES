/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:40:54 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/03 18:41:07 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

#define MAX_MATERIAS 4


class MateriaSource : public IMateriaSource
{
	private:
	    AMateria* templates[4];
	    int idx;

	public:
	    MateriaSource();
	    MateriaSource(MateriaSource const & other);
	    MateriaSource & operator=(MateriaSource const & other);
	    virtual ~MateriaSource();
	    virtual void learnMateria(AMateria*);
	    virtual AMateria* createMateria(std::string const & type);
};

#endif

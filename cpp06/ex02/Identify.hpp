/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:33:47 by smuhamma          #+#    #+#             */
/*   Updated: 2023/11/17 17:34:04 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include "Base.hpp"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
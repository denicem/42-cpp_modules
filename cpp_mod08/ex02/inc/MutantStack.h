/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:33:28 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/11 00:40:30 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

template<typename T>
class MutantStack: public std::stack<int>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const { return (this->c.cbegin()); }
	const_iterator end() const { return (this->c.cend()); }
};

#endif
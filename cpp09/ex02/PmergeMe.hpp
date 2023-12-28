/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:48:00 by evila-ro          #+#    #+#             */
/*   Updated: 2023/12/29 00:23:59 by evila-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <vector>
# include <deque>
# include <ctime>
# include <iostream>
# include <algorithm>
# include <sys/time.h>
		

class PmergeMe
{
	private:
		int				_size;
		bool			_odd;
		unsigned int	_last;

	public:
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(PmergeMe const &src);
		PmergeMe	 &operator=(PmergeMe const &ass);

		bool		checkInput(std::string s1, std::string s2);
		void		setOdd(bool d);
		void		setLast(int lst);
		void		setSize(int size);
		bool		getOdd(void);
		int			getLast(void);
		int			getSize(void);

		template <typename T, typename S, typename V>
		void timedSort(T container, S& contA, V& contB, char choice)
		{
			struct timeval start, end;
			long sec, micro;

			gettimeofday(&start, NULL);

			typename T::iterator it;
			for (it = container.begin(); it != container.end(); ++it)
			{
				if ((*it).first > (*it).second)
					std::swap((*it).first, (*it).second);
			}
			for (it = container.begin(); it != container.end(); ++it)
				contA.push_back((*it).first);
	
			for (it = container.begin(); it != container.end(); ++it)
				contB.push_back((*it).second);

			std::sort(contA.begin(), contA.end());

			typename S::iterator iter;
			for (iter = contB.begin(); iter != contB.end(); ++iter)
				contA.insert(std::lower_bound(contA.begin(), contA.end(), *iter), *iter);

			std::cout << "Odd = " << _odd << std::endl;
			if (_odd)
				contA.insert(std::lower_bound(contA.begin(), contA.end(), _last), _last);

			std::cout << std::endl << std::endl << "After : ";

			for (iter = contA.begin(); iter != contA.end(); ++iter)
				std::cout << *iter << " ";

			gettimeofday(&end, NULL);
			sec = end.tv_sec - start.tv_sec;
			micro = end.tv_usec - start.tv_usec;
			long time = (sec / 1000000) + micro;
			std::cout << std::endl << "Time to precess a size of " << _size << " elements with ";
			if (choice == 'v')
				std::cout << "std::vector : ";
			else if (choice == 'd')
				std::cout << "std::deque : "; 
			std::cout << time << " us" << std::endl;
		}
};

#endif

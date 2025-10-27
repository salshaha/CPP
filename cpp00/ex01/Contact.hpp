/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salshaha <salshaha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:26:16 by salshaha          #+#    #+#             */
/*   Updated: 2025/09/04 13:59:50 by salshaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
class Contact 
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
		std::string getFirst_name() const;
		std::string getLast_name() const;
		std::string getNickname() const;
		std::string getPhone_number() const;
		std::string getDarkest_secret() const;
		
		void	setFirst_name( std::string first_name );
		void	setLast_name( std::string last_name );
		void	setNickname( std::string nickname );
		void	setPhone_number( std::string phone_number );
		void	setDarkest_secret( std::string darkest_secret );

		Contact();
		~Contact();
};

#endif
/*	Garf IRC bot
    Copyright (C) 2013  fallenby

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. 
    
    Contact me(the founding developer) at:
    fallenby@outlook.com */

#ifndef MESSAGE_PARSER_H
#define MESSAGE_PARSER_H

#include <string>

#include "Message.h"
#include "JoinMessage.h"
#include "QuitMessage.h"
#include "HumanMessage.h"
#include "HumanUser.h"
#include "PingMessage.h"
#include "ServerUser.h"

class MessageParser
{
	public:
		MessageParser(const std::string& _message);
		virtual ~MessageParser();
		
		void setMessage(const std::string& _message);
		
		Message* getResult();
	private:
		Message* parseMessage();
	
		std::string message;
};

#endif

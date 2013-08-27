#ifndef MESSAGE_PARSER_H
#define MESSAGE_PARSER_H

#include "Message.h"

class MessageParser
{
	public:
		MessageParser();
		MessageParser(const std::string& _message);
		virtual ~MessageParser();
		
		void setMessage(const std::string& _message);
		
		const Message& getResult();
	private:
		const Message& parseMessage();
	
		std::string message;
};

#endif

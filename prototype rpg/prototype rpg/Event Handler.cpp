#include "EventHandler.h"

bool EventHandler::isQuiting(std::istream& is, std::ostream& os)
{
	char input;
	os << "input(i)";
	is >> input;

	//return true;
	if(input == 'i')
	{
		q = true;
		return q;
	}
	else
	{
		q = false;
		return q;
	}
}
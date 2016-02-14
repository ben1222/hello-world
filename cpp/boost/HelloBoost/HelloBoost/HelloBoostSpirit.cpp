#include <boost/spirit/include/qi.hpp>
#include <iostream>

#include "HelloBoost.h"


int hello_boost_spirit()
{
	using namespace boost::spirit;
	using std::cout;
	using std::cin;
	using std::endl;

	cout << __FUNCTION__ << endl;

	// http://www.boost.org/doc/libs/1_60_0/libs/spirit/doc/html/spirit/abstracts/attributes/primitive_attributes.html
	{
		int value = 0;
		std::string str("123");
		std::string::iterator strbegin = str.begin();
		qi::parse(strbegin, str.end(), int_, value);
		cout << "qi::parse \"123\": (int)value = " << value << endl;
	}

	return 0;
}

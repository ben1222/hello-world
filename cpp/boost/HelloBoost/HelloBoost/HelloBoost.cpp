// HelloBoost.cpp : Defines the entry point for the console application.
//

// Following boost guide: Getting Started on Windows
// http://www.boost.org/doc/libs/1_60_0/more/getting_started/windows.html

#include "stdafx.h"
#include "HelloBoost.h"

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int hello_boost_lambda()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << '\n');

	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	hello_boost_spirit();
	//hello_boost_lambda();

	system("pause");
	return 0;
}


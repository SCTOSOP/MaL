#ifndef REGEXL_H
#define REGEXL_H

#include <boost/regex.hpp>
#include <string.h>

namespace REGEXL
{
	bool var_or_con(const char* str);

	// 赋值 -- 0全部 1左值 3右值
	bool assignment(const char* str, boost::cmatch& cm);

	bool fun_call(const char* str, boost::cmatch& cm);
}

#endif // !REGEXL_H
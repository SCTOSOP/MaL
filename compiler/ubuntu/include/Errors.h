#ifndef Errors
#define Errors
#include <string>

class Error
{
public:
	Error(std::string filename, size_t line,  std::string message);

	const char* what();
	void print_what();

protected:
	std::string err;
};

class Warning
{
public:
	Warning(std::string filename, size_t line,  std::string message);

	const char* what();
	void print_what();

protected:
	std::string war;
};

class Info
{
public:
	Info(std::string filename, size_t line,  std::string message);

	const char* what();
	void print_what();

protected:
	std::string info;
};


#endif // !Errors

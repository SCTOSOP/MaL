#include "../include/Errors.h"
using namespace std;


Error::Error(std::string filename, size_t line,  std::string message)
{
	err = string("E[")+filename+string(" l")+to_string(line)+string("]")+message;
}

const char* Error::what()
{
	return err.c_str();
}

void Error::print_what()
{
	printf("\033[1m\033[31m%s\033[0m\n",err.c_str());
}

Warning::Warning(std::string filename, size_t line,  std::string message)
{
	war = string("W[")+filename+string(" l")+to_string(line)+string("]")+message;
}

const char* Warning::what()
{
	return war.c_str();
}

void Warning::print_what()
{
	printf("\033[1m\033[33m%s\033[0m\n",war.c_str());
}

Info::Info(std::string filename, size_t line,  std::string message)
{
	info = string("I[")+filename+string(" l")+to_string(line)+string("]")+message;
}

const char* Info::what()
{
	return info.c_str();
}

void Info::print_what()
{
	printf("\033[1m\033[34m%s\033[0m\n",info.c_str());
}
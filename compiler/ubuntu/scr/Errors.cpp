#include "../include/Errors.h"
using namespace std;


Error::Error(std::string filename, size_t line,  std::string message)
{
    err = string("[")+filename+string(" l")+to_string(line)+string("]")+message;
}

const char* Error::what()
{
    return err.c_str();
}

void Error::print_what()
{
    printf("%s\n",err.c_str());
}